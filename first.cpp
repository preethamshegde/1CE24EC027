#include <iostream>
using namespace std;

int main() {
  int myAge ,votingAge ;
  votingAge = 18;
  cout<<"enter the age:";
  cin>>myAge;
  cout<<"your age is:"<< myAge;

  if (votingAge <= myAge) {
    cout << "  Old enough to vote!";
  } else {
    cout << " not old enough to vote.";
  }
  return 0;
}
