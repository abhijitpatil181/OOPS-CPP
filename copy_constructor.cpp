#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    Hero(int health,int level){
        this->health=health;
        this->level=level;
    }
    //manual copy constructor
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"health->"<<health<<endl;
        cout<<"level is->"<<level<<endl;
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
    Hero h1(100,'C');
    h1.print();
    
    //dynamic allocation
    //constructor is copied
    Hero h2(h1);
    h2.print();
    return 0;
}