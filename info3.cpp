#include<iostream>
#include<cstdio>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int x = 0;
  int y = 0;
  int W[n];
  int seq1[n/2];
  int seq2[n/2];

  for (int i = 0; i < n; i++)
  {
    cin>>W[i];
  }
  
  for (int i = 0; i < n; i+= 2)
  {
    seq1[i/2]=W[i];
  }

    for (int i = 1; i < n+2; i+= 2)
  {
    seq2[(i-1)/2]=W[i];
  }

  for (int i = 0; i < n/2; i++)
  {
    cout<<seq1[i]<<" ";
  }
  cout<<endl;

    for (int i = 0; i < n+1/2; i++)
  {
    cout<<seq2[i]<<" ";
  }
    cout<<endl;
  

  for ( int i = 0; i < (n/2)-5; i++)
  {
    x = x + (seq1[i]+seq1[i+1]+seq1[i+2]+seq1[i+3]+seq1[i+4]);
  }

    for ( int i = 0; i < (n/2)-5; i++)
  {
    y = y + (seq2[i]+seq2[i+1]+seq2[i+2]+seq2[i+3]+seq2[i+4]);
  }

  if (x > y)
  {
    cout<<x;
  }
  else{
    cout<<y;
  }
  
  
  

  return 0;
}