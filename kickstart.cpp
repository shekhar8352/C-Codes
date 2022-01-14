#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
  int t, n, d, c, m;
  cin>>t;
  cin>>n>>d>>c>>m;
  string str;
  cin>>str;
  int catNo = 0;
  int dogNo = 0;
  for (int i = 0; i < n; i++)
  {
    if (str[i] == 'C')
    {
      catNo++;
    }
    
  }
    for (int i = 0; i < n; i++)
  {
    if (str[i] == 'D')
    {
      dogNo++;
    }
    
  }

  c = c+catNo;

  if (dogNo >= d)
  {
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  
  
  return 0;
}