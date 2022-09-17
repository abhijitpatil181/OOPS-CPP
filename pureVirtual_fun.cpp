/* Topic:- Pure virtual function
syntax:- virtual return_type fun_name()=0;

Notes:-
1)If some class can have only signature of function but not the body then we can use pure virtual function.
2)sometimes in base class we know the function name but not defination of function ,
  so we want derived cla
  ss to provided defination of that function.
3)
4)If you have pure virtual function in class,it means that class is an abstract class and 
  you can't create object of that class(but ptr and ref can be created).

Use case:-
Use to create abstract classes which helps in creating interfaces(APIs)
*/

#include <iostream>
using namespace std;

class Animal{
public:
    virtual void eat()=0;
};

void Animal::eat(){
    cout<<"This is in base"<<endl;
}

class Cat:public Animal{
public:
    void eat(){
        Animal::eat();
        cout<<"Eat non-veg"<<endl;
    }
};

class Cow:public Animal{
public:
    void eat(){
        cout<<"Eat veg"<<endl;
    }
};

int main(){
    Cat c;
    c.eat();
    return EXIT_SUCCESS;
}