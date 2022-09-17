#include<iostream>
using namespace std;

class Hero{
    public:
    int a;
    //static data member declared
    static int b;

    static void print(){
        cout<<b<<endl;
    }
};
//static data member defined
int Hero::b=6;

int main(){
    cout<<Hero::b<<endl;
    Hero::print();
}