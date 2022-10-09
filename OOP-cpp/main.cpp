#include "A.h" //foo A
#include "B.h" //foo B
#include "C.h" //foo goo
#include "D.h" //foo goo 
#include "E.h" //foo goo
#include <iostream>
using namespace std;
int main()
{
    A a = E();
    //1. a.goo();
    A a = C(); //4
    a.foo(); //4
    A a = D();
    //a.goo(); //5
    D().foo(); //6
    E().goo(); //2.
    //E e = A(); //3
    //e.foo(); //3.
    cout << "-------------------" << endl;
    A a;
    B b;
    C c;
    D d;
    E e;
    a.foo();
    b.foo();
    c.goo();
    d.goo();
    e.foo();
    return 0;
}