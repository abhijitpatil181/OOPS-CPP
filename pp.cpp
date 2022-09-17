#include <iostream>
#include <stddef.h>
using namespace std;

int division(int a,int b){
    if(b==0){
        throw "division by zero error";
    }
    return (a/b);
}

int main(){
    int a,b;
    cin>>a>>b;

    division(a,b);
}