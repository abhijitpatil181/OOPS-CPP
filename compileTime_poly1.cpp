/*Polymorphism  is concept that allows you to perform a single action in different ways.
There are two types of polymorphism.
1) Compile Time polymorphism  / static Binding  /Early Binding
    i)Function(Method) Overloading
    ii)Operator Overloading
2) Runtime Polymorphism   / Dynamic Binding  / Lazy Binding
    i)Function Overriding(using virtual function)
*/

#include <iostream>
using namespace std;

class Addition{
public:
    int x,y;
public:
    void add(int x){
        int y=20;
        cout<<x+y<<endl;
    }
    void add(int x,int y){
        cout<<x+y<<endl;
    }
};

int main(){
    Addition b1,b2;
    b1.add(10);
    b2.add(20,30);

}