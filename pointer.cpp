 #include<iostream>
 using namespace std;
 int main(){
    string food = "pizza";
    string* pp = &food;
    cout << food << endl;
    cout << &food << endl;
    cout << pp <<endl;
 }