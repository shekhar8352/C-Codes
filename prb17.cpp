#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
  string st;
  cin>>st;
  int strlength = st.length();
  int comCount = 0;
   for (int i = 0; i < strlength; i++)
   {
     if (st[i] = ',')
     {
       comCount++;
     }
     
   }

   stoi(st);
   
  int con[comCount+1];
   for (int i = 0; i < strlength; i++)
   {
     string st[i, i+1] = con[i];
     i++;
   }
   
  
  
  return 0;
}