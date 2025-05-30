#include <iostream>
using namespace std;

float area_of_rectangle(float a , float b){
    
    return a * b;
}  
 
int main(){
    float x , y , area ;

    cout << "enter the length of the rectangle : ";
    cin >> x ;
    cout << " enter the breath of the rectangle :";
    cin >> y;
    area = area_of_rectangle(x,y);
    cout << "area of rectangle : "<< area;
}