#include <bits/stdc++.h>
using namespace std;

void Rank()
{
  int DSA1, TOC1, DM1;
  int DSA2, TOC2, DM2;
  cin >> DSA1 >> TOC1 >> DM1;
  cout << endl;
  cin >> DSA2 >> TOC2 >> DM2;
  int sumDragon = DSA1 + TOC1 + DM1;
  int sumSloth = DSA2 + TOC2 + DM2;

  if (sumDragon > sumSloth)
  {
    cout << "DRAGON" << endl;
  }
  else if (sumSloth > sumDragon)
  {
    cout << "SLOTH" << endl;
  }
  else if (sumSloth == sumDragon && DSA1 > DSA2)
  {
    cout << "DRAGON" << endl;
  }
  else if (sumSloth == sumDragon && DSA1 == DSA2 && TOC1 > TOC2)
  {
    cout << "DRAGON" << endl;
  }
  else if (sumSloth == sumDragon && DSA1 == DSA2 && TOC1 == TOC2 && DM1 > DM2)
  {
    cout << "DRAGON" << endl;
  }
  else if (sumSloth == sumDragon && DSA1 < DSA2)
  {
    cout << "SLOTH" << endl;
  }
  else if (sumSloth == sumDragon && DSA1 == DSA2 && TOC1 < TOC2)
  {
    cout << "SLOTH" << endl;
  }
  else if (sumSloth == sumDragon && DSA1 == DSA2 && TOC1 == TOC2 && DM1 < DM2)
  {
    cout << "SLOTH" << endl;
  }
  else
  {
    cout << "TIE" << endl;
  }
}

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    Rank();
  }

  return 0;
}