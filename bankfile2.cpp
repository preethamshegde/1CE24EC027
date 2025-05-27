#include <iostream>
#include <vector>
using namespace std;
class person
{
    public:
        string name;
        string pancard_number;
        string aadhar_card_number;

        person(string user_name,string p_card,string a_card)
        {
            name = user_name;
            pancard_number=p_card;
            aadhar_card_number=a_card;
        }
        void display_details()
        {
            cout<<"User Details"<<endl;
            cout<<"Pancard:"<<pancard_number<<endl;
            cout<<"Aadhar Card:"<<aadhar_card_number<<endl;   
            cout<<"==================================="<<endl;
        }
};
int main()
{
    string name, pancard, aadharcard;
    vector<person> list_of_users;
    int options;
    while (true)
    {
        cout << "choose the option: " << endl;
        cout << "1. create a account " << endl;
        cout << "2. list all the users " << endl;
        cout << "3. exit the projects " << endl;
        cin >> options;
        switch (options)
        {
        case 1:
            cout << "create a account " << endl;
            cout << "Enter the name for " <<endl;
            cin >> name;
            cout << "Enter the pancard " <<endl;
            cin >> pancard;
            cout << "Enter the aadhar card " <<endl;
            cin >> aadharcard;
            list_of_users.push_back(person(name, pancard, aadharcard));
 
            break;
        case 2:
            cout << "listing all the accounts " << endl;
            for (person user : list_of_users)
    {
        user.display_details();
    }

            break;
        case 3:
            cout << "exiting the program " << endl;
            return 0;
            break;
        default:
            break;
            
        }
    }
}