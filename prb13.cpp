#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int a, b, s, t, d, m, n;
  cin>>s>>t;
  cin>>a>>b;
  cin>>m>>n;
  int app[m];
  int ora[n];

  int appCount = 0;
  int oraCount = 0;

  for (int i = 0; i < m; i++)
  {
    cin>>app[i];
  }
    for (int i = 0; i < n; i++)
  {
    cin>>ora[i];
  }

  for (int i = 0; i < m; i++)
  {
    if (app[i]>=(s-a) &&app[i]<=(t-a))
    {
      appCount++;
    }
    
  }

    for (int i = 0; i < n; i++)
  {
    if (ora[i]+(b-t)<=0 && ora[i]+(b-s)>=0)
    {
      oraCount++;
    }
    
  }
  
cout<<appCount<<endl<<oraCount;

  
  
  return 0;
}