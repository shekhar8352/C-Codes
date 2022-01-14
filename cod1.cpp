#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;

int main(){
  int n, k;
  int x=0;
  cin>>n>>k;
  int ar[n];

  for (int i = 0; i < n; i++)
  {
    cin>>ar[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (ar[i]%4 == 0)
    {
      x++;
    }
    
  }

  cout<<x;

  return 0;
}