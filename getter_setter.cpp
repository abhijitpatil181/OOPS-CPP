#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

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
    Hero h1;
    h1.sethealth(100);
    h1.setlevel('B');
    cout<<"health is:"<<h1.gethealth()<<endl;;
    cout<<"level is:"<<h1.getlevel()<<endl;

    //dynamic allocation
    Hero *h2 = new Hero;
    h2->sethealth(200);
    h2->setlevel('A');
    cout<<"health is:"<<h2->gethealth()<<endl;
    cout<<"level is:"<<h2->getlevel()<<endl;

    return 0;
}