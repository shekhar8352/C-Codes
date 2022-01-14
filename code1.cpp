#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  short int x;
  cin >> x;
  short int combo[3 * x][3 * x];
  short int comboSum[3 * x];
  for (short int i = 0; i < 3 * x; i++)
  {
    cin >> combo[i][0];
    cin >> combo[0][i];
  }

  for (short int i = 0; i < 3 * x; i++)
  {
    comboSum[i] = combo[i][0] + combo[0][i];
  }

  for (short int i = 0; i < 3 * x; i += 3)
  {
    if (comboSum[i] > comboSum[i + 1] && comboSum[i] > comboSum[i + 2])
    {
      cout << comboSum[i];
    }
    else if (comboSum[i + 1] > comboSum[i] && comboSum[i + 1] > comboSum[i + 2])
    {
      cout << comboSum[i + 1];
    }
    else
    {
      cout << comboSum[i + 2];
    }
    cout << endl;
  }

  return 0;
}