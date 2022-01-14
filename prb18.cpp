#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){

  int age, std;
  string fName, lName;
  cin>>age>>fName>>lName>>std;

  struct data
  {
    int age;
    string fName;
    string lName;
    int std;
  };

  cout<<age<<endl<<fName<<", "<<lName<<endl<<std<<endl<<endl;
  cout<<age<<","<<fName<<","<<lName<<","<<std;

  return 0;
}