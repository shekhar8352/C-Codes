#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  long int arr [5];
  long int maxPossible = 0;
  long int minPossible = 0;
  long int sumArr1 = 0;long 
  long int sumArr2 = 0;
  long int sumArr3 = 0;
  long int sumArr4 = 0;
  long int sumArr5 = 0;

  for (int i = 0; i < 5; i++)
  {
    cin>>arr[i];
  }

  long int arr1[4] = {arr[0], arr[1], arr[2], arr[3]};
  long int arr2[4] = {arr[1], arr[2], arr[3], arr[4]};
  long int arr3[4] = {arr[0], arr[1], arr[2], arr[4]};
  long int arr4[4] = {arr[0], arr[1], arr[3], arr[4]};
  long int arr5[4] = {arr[0], arr[2], arr[3], arr[4]};
 
  for (int j = 0; j < 4; j++)
  {
    sumArr1 += arr1[j];
    sumArr2 += arr2[j];
    sumArr3 += arr3[j];
    sumArr4 += arr4[j];
    sumArr5 += arr5[j];
  }
  
  long int sumArr[5] = {sumArr1, sumArr2, sumArr3, sumArr4, sumArr5};
   for (int i = 0; i < 5 - 1; i++){
            for (int j = 0; j < 5 - i - 1; j++)
                if (sumArr[j] > sumArr[j + 1])
                {
                    long int temp = sumArr[j];
                    sumArr[j] = sumArr[j + 1];
                    sumArr[j + 1] = temp;
                }
    }

    maxPossible = sumArr[4];
    minPossible = sumArr[0];

    cout<<minPossible<<" "<<maxPossible;



  // minPossible = min(sumArr1, sumArr2, sumArr3, sumArr4, sumArr5);

  return 0;
}