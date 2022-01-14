#include <bits/stdc++.h>
using namespace std;

int FD()
{
  int N, X, temp;
  cin >> N >> X;
  int fd[N];
  for (int i = 0; i < N; i++)
  {
    cin >> fd[i];
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      if (fd[i] < fd[j])
      {
        temp = fd[i];
        fd[i] = fd[j];
        fd[j] = temp;
      }
    }
  }

  int Z = 0;

  for (int i = 0; i < N; i++)
  {
    // cout << fd[i] << " ";
    Z = Z + fd[i];
    // cout << Z << " ";
    if (X <= Z)
    {
      cout << i + 1;
      cout << endl;
      return 0;
    }
  }
  if (X > Z)
  {
    cout << "-1";
  }

  cout << endl;
  return 0;
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    FD();
  }

  return 0;
}