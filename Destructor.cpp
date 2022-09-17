/* Destructor in cpp
1) This is a special member function with same name as class with ~ at front.
2) used to destruct memory of object which was constructed by constructor.
3) Destructor get called automatically(implicitly) as constructor was.
4) We can call destructor explicitly but this is not good practice.
5) The only place where we will call destructor explicitly is after placement new.
*/

#include <iostream>
using namespace std;

class Base{
    int x;

    public:
    Base(){
        cout<<"default constructor"<<endl;
    }
    Base(int n){
        this->x=n;
    }
    ~Base(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Base b,c(10);
    
    return 0;

}