#include<iostream>
#include<cstdio>
using namespace std;

class prb19
{
private:
public:
  int l, w;
  void area(int l, int w){
    int a = l*w;
    cout<<l<<" "<<w<<endl<<a;
  }
};

int main(){
  int l,w;
  cin>>l>>w;
  prb19 rect;
  rect.area(l, w);

  return 0;
}