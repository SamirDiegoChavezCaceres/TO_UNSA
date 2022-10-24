#include "assert.h"
#include "arrayStack.h"
template <typename T>
void ArrayStack<T>::push(T e){
    int numelements = sp - data;
    if(numelements == size)
        resize();
    *sp = e;
    sp++;
}
template <typename T>
void ArrayStack<T>::pop(){
    int numelements = sp - data;
    if(empty()) //1.
        return;
    return sp--;
}
template <typename T>
bool ArrayStack<T>::empty(){
    int numelements = sp - data;  
    return numelements == 0;
}
template <typename T>
void ArrayStack<T>::resize(){
    int FACTOR = 10;
    T newData[] = new T [size+FACTOR];
    for(int i = 0; i < size; i++)
        newData[i] = data[i];
    delete [] data;
    data = newData;
    sp = data + size;
    size += FACTOR;
}
template <typename T>
T ArrayStack<T>::top(){;
    assert(!empty()); //3.
    assert(*(sp-1) == *data);//5
    return *(sp-1);
}