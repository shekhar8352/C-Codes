#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int r;
  int j = 0;
  int x[3];
  int A[n];
  int B[n];

  for (int i = 0; i < n; i++)
  {
    cin>>A[i];
  }
    for (int i = 0; i < n; i++)
  {
    cin>>B[i];
  }

  for (int i = 0; i < n-1; i++)
  {
    if (__gcd(A[i], A[i+1]) == min(A[i], A[i+1]))
    {
      x[j] = i;
      j++;
    }
    
  }
  

  r = B[x[0]]^B[x[1]]^B[x[2]];
  cout<<r;
  
  
  return 0;
}