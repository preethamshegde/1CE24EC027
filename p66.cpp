#include<iostream>
using namespace std;

class Point{
public:
    int x, y;

    Point(int a, int b){
        x = a;
        y = b;
    }

    Point operator-(Point P){
        return Point(x -P.x,y -P.y);
    }
    void show(){
        cout << x <<","<< y << endl;
    }

};
int main(){
    Point P1(1,2);
    Point P2(2,3);
    Point P3= P1 - P2;
    P3.show();
}