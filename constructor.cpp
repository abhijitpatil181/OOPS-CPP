#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    //default constructor created
    Hero(){
        cout<<"constructor called"<<endl;
    }

    //parameterised constructor
    Hero(int health){
        this->health=health;
    }
    Hero(int health,int level){
        this->health=health;
        this->level=level;
    }

    void sethealth(int h){
        health=h;
    }
    void setlevel(char l){
        level=l;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

};

int main(){
    //static allocation
    Hero h1(100);
    cout<<h1.gethealth()<<endl;
    cout<<h1.getlevel()<<endl;

    //dynamic allocation
    Hero *h2 = new Hero(200,'N');
    cout<<h2->gethealth()<<endl;
    cout<<h2->getlevel()<<endl;
    

    return 0;
}