#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
  int x = 0;
  int n, y;
  string A;
  string B;

  cin>>n;

  for (int i = 0; i < n; i++)
  {
    cin>>A[i];
  }
    for (int i = 0; i < n; i++)
  {
    cin>>B[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (A[i] != B[i])
    {
      A[i] = B[i];
      x++;
    } else{
      y++;
    }

  }

  cout<<x;
  
  return 0;
}