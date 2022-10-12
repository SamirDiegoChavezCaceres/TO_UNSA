#include "List.h"
List::List(){
  last = nullptr;
}
List* List::append(int e){
  if(isEmpty()){
    last = new Node;
    last->data = e;
    last->next = last;
    return this;
  }
  Node* n = new Node;
  n->data = e;
  n->next = last->next;
  last->next = n;
  last = n;
  return this;
}
int List::head(){
  return last->next->data;
}
int List::size(){
  int c = 0;
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(iter == last)
      iter = nullptr;
    c++;
  }
  return c;
}
int List::getKth(int idx){
  int c = 0;  
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(c == idx)
      iter = nullptr;
    c++;
  }
  return iter->data;
}
Node* List::removeKth(int idx){
  int c = 0;  
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(c == idx-1)
      iter = nullptr;
    c++;
  }
  //idx-1 idx *
  //iter n n->next
  Node* n = iter->next;
  iter->next = n->next;
  return n;
}