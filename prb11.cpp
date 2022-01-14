#include<iostream>
#include<cstdio>
using namespace std;

int main(){

  int n;
  cin>>n;
  int std[n];
  int finalgrd[n];

  for (int i = 0; i < n; i++)
  {
    cin>>std[i];
  }

  for (int i = 0; i < n; i++)
  {
    int rm = (5 - std[i]%5);

    if(std[i]>37 && rm<3){
      std[i] = std[i]+rm; 
    }
    
  }

  for (int i = 0; i < n; i++)
  {
    cout<<std[i]<<endl;
  }

    return 0;
}