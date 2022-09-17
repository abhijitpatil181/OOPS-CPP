#include <iostream>
using namespace std;

//In c++ it is possible to change the behaviour of operator.(+,-,*,/)
//But we can change the behaviour only for user defined types(class ,struct)

class Point{
    private:
    int x,y;

    public:
    Point(){
        x=0;
        y=0;
    };
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    
    Point operator+(const Point& rhs){
        Point p;
        p.x=x+rhs.x;
        p.y=y+rhs.y;
        return p;
    }
    Point add(const Point& obj){
        Point p;
        p.x=x+obj.x;
        p.y=y+obj.y;

        return p;
    }

    void printPoint(){
        cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
    }

};

int main(){
    Point p1(4,8),p2(5,10);
    Point p3=p1+p2;
    Point p4=p3.add(p2);
    p1.printPoint();
    p2.printPoint();
    p3.printPoint();
    p4.printPoint();

}

/*Below operators cannot be overloaded
1) ::
2) ?:
3) .
4) .*
5)sizeof
6)typeid
*/