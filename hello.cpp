#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int a;
  long int b;
  char c;
  float d;
  double e;

  cin>>a;
  cin>>b;
  cin>>c;
  cin>>d;
  cin>>e;

  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<fixed<<setprecision(9)<<e<<endl;

  return 0;
}