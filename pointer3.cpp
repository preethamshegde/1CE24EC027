
#include<iostream>
using namespace std;
int main(){
    string food = "pizza";
    string *pp = &food;

    cout << " name of the food:"<<food << endl;
    cout << "address of the food:"<< pp << endl;

    *pp ="dosa";

    cout << "name of the changed food:" << food << endl;
    cout << "address of the changed food :" << pp << endl;
}