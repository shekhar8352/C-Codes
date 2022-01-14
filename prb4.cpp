#include <iostream>
using namespace std;

int main(){

  int alc[3];
  int bob[3];
  int alcPoint = 0;
  int bobPoint = 0;

  for (int  i = 0; i < 3; i++)
  {
    cin>>alc[i];
  }
  
    for (int  j = 0; j < 3; j++)
  {
    cin>>bob[j];
  }

  if (alc[0]>bob[0])
  {
    alcPoint += 1;
  }
   if (alc[1]>bob[1])
  {
    alcPoint += 1;
  }
   if (alc[2]>bob[2])
  {
    alcPoint += 1;
  }
  if (alc[0]<bob[0])
  {
    bobPoint += 1;
  }
   if (alc[1]<bob[1])
  {
    bobPoint += 1;
  } if (alc[2]<bob[2])
  {
    bobPoint += 1;
  }  

  cout<<alcPoint<<" "<<bobPoint;  




  return 0;
}