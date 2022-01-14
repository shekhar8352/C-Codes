#include <iostream>
using namespace std;

int main(){
 int n;
 cin>>n;
 int sumDiagonal1 = 0;
 int sumDiagonal2 = 0;
 int diff;
 int arr[n][n];

 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < n; j++)
 {
  cin>>arr[i][j];
 }
   
 }

 for (int  k = 0; k < n; k++)
 {
   sumDiagonal1 += arr[k][k];
 }
 for (int l = 0; l < n; l++)
 {
   sumDiagonal2 += arr[l][n-l-1];
 }

  diff = sumDiagonal1-sumDiagonal2;

  if (diff<0)
  {
    diff *= -1;
    cout<<diff;
  }else{
    cout<<diff;
  }
 
 
return 0;
}