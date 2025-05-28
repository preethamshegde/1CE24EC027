#include<iostream>
using namespace std;
 int main(){
    int *num= new int;
    *num = 50; // 50 represents the value not the size
    cout << "allocated value:" << *num << endl;
    cout << "Size of the variable :" << sizeof(*num)<< "bytes" << endl;
    delete num ;
 }