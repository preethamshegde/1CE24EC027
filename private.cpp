#include<iostream>
using namespace std;
class person
{
public:
    void hello()
    {
        cout << "Hello" << endl;
    }
private:
    void hello2()
    {
        cout << "Hello2" << endl;
    }
};
int main()
{
    person p1;
    p1.hello();
}