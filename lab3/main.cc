#include "arrayStack.h"
#include "iostream"
using namespace std;
int main(){
    ArrayStack<int> s(10);
    cout << s.empty() << endl;
    s.push(1);
    cout << s.top() << endl;
    cout << s.empty() << endl;
    s.push(2);
    cout << s.top() << endl;
    s.push(3);
    cout << s.top() << endl;
    s.push(4);
    cout << s.top() << endl;
    s.push(5);
    cout << s.top() << endl;
    s.push(6);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
}