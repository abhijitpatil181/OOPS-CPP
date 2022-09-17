#include <iostream>
using namespace std;

class printData{
    public:
    void print(int i){
        cout<<i<<endl;
    }

    void print(double d){
        cout<<d<<endl;
    }

    void print(string name){
        cout<<name<<endl;
    }
};

int main(){
    printData pd;
    pd.print(5);
    pd.print(45.3);
    pd.print("Hello cpp");

}