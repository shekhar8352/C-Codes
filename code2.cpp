#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int x;
  cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (x % 2 != 0)
    {
      for (int i = 0; i < x; i++)
      {
        for (int j = 0; j < x; j++)
        {
          cout << "1";
        }
        cout<<endl;
      }
    }
    else
    {
      for (int i = 0; i < x; i++)
      {
        for (int j = 0; j < x; j++)
        {
          if (i % 2 == 0 || j % 2 == 0)
          {
            cout << "1";
          }
          else
          {
            cout << "0";
          }
        }
        cout<<endl;
      }
    }
  }
  return 0;
}