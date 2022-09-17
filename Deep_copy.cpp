#include<iostream>
#include<cstring>
using namespace std;

class Student{
    public:
    string name;
    private:
    int *standard;

    public:
    Student(int std){
        standard=new int;
        *standard=std;
    }
    Student(const Student& obj){
        standard=new int;
        *standard=obj.get();
    }
    
    void print(){
        cout<<*standard<<endl;
    }
    int get()const{
        return *standard;
    }

    void set(int x){
        *standard=x;
    }
    ~Student(){
        delete standard;
    }
};

int main(){
    Student s1(10);
    Student s2=s1;
    s1.print();
    s2.print();

    s1.set(12);
    s1.print();
    s2.print();
}