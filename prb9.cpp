#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  cin>>n;
  int candle[n];
  int maxInput;
  int noMaxInput = 0
  ;
  for (int i = 0; i < n; i++)
  {
    cin>>candle[i];
  }
  
        for (int i = 1; i < n; i++){
            if (candle[i] > maxInput)
                maxInput = candle[i];
    }

    for (int i = 0; i < n; i++)
    {
      if (maxInput == candle[i])
      {
        noMaxInput ++;
      }
      
    }
    
    cout<<noMaxInput;

  return 0;
}