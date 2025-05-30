#include<iostream>
using namespace std;

float area_of_circle(float radies){

    return 3.14*radies*radies;
}

float area_of_treangle(float height ,float width){

    return 0.5*height*width;
}
float area_of_rectangle(float height ,float breath){

    return height*breath;
}
int main(){
    float full_area=area_of_rectangle(10,10 )+ area_of_treangle(5,12);
    float sub_area = area_of_circle(2) + area_of_treangle(2,3)+area_of_rectangle(3,7);

cout<< full_area - sub_area <<endl;
}