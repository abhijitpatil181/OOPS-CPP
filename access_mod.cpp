#include<iostream>
using namespace std;

class Hero{
    //by default attributes are private
    private:
    char level;
    public:
    int health;

    void setLevel(char l){
        level=l;
    }
    
    char print(){
        return level;
    }
};
int main(){
    Hero h1;
    //you can access attributes by using dot operetaor
    h1.health=70;
    h1.setLevel('D');
    cout<<"health is:"<<h1.health<<endl;
    cout<<"level is:"<<h1.print()<<endl;

return 0;
}

/*
Public ---> You can access inside as well as outside the class
Private---> You can access only inside the class
Protected---> You can access inside the class and its subclass only.*/