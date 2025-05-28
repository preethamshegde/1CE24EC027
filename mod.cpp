#include<iostream>
using namespace std;

class Person
{
    public:
    string name ="Defalt name";
    int age = 0;

    Person(string name, int age)
    {
        this->name=name;
        this->age = age;
    }
    void print()
        {
            cout << name << endl;
            cout << age << endl;
        }
    
};
int main(){
        Person p1("preetham ",19);
        p1.print();
        cout << "Size of the variable:" <<sizeof(p1) << "bytes"<< endl;

}