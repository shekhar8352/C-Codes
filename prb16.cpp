#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){

  string a;
  string b;
  string c;

  int la, lb, lc;

  cin>>a>>b;

  c = a+b;

       int temp = a[0];
    a[0] = b[0];
    b[0] = temp;


  la = a.length();
  lb = b.length();
  lc = c.length();

  cout<<la<<" "<<lb<<endl<<c<<endl<<a<<" "<<b;

  return 0;
}