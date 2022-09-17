/*Operator overloading
*/

#include <iostream>
using namespace std;

class Complex{
    int real,img;

    public:
    Complex(int i=0,int j=0){
        this->real=i;
        this->img=j;
    }

    Complex operator+(const Complex& obj){
        Complex result;
        result.real=real+obj.real;
        result.img=img+obj.img;

        return result;
    }

    void printComplex(){
        cout<<"Complex number is: "<<real<<"+"<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(2,3),c2(4,7);
    Complex c3=c1+c2;
    c3.printComplex();
}