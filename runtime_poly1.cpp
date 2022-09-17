 /* virtual function
 1)used for dynamic polymorphism.which is the ability to call derived class function using base class pointer or reference.

 */

#include <iostream>
using namespace std;

class Base{

public:
//making function virtual
    virtual void fun(){
        cout<<"Base class function"<<endl;
    }

    void fun1(){
        cout<<"Inside base"<<endl;
    }

};

class Derived : public Base{
public:
    void fun(){
        cout<<"Derived class function"<<endl;
    }
    void fun1(){
        cout<<"Inside Derived"<<endl;
    }
};

int main(){
    Derived d;
    Base *ptr=new Derived;
    Base &rf=d;
    ptr->fun();
    ptr->fun1();

}