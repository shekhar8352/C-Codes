#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  cin>>n;
  double poss = 0;
  double neg = 0;
  double zero = 0;
  double possRatio, negRatio, zeroRatio;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }

  for (int j = 0; j < n; j++)
  {
    if (arr[j] < 0)
    {
      neg++;
    }   
    else  if (arr[j] > 0)
    {
      poss++;
    }  
    else  if (arr[j] == 0)
    {
      zero++;
    }
    
  }

  possRatio = poss/n;
  negRatio = neg/n;
  zeroRatio = zero/n;
  
  cout<<fixed<<setprecision(6)<<possRatio<<endl;
  cout<<fixed<<setprecision(6)<<negRatio<<endl;
  cout<<fixed<<setprecision(6)<<zeroRatio<<endl;
  return 0;
}