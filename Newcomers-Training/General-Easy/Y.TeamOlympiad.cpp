#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, x, mn = INT_MAX;
  pair<int, vector<int>> one, two, three;
  one.first = 0, two.first = 0, three.first = 0;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (x == 1)
    {
      one.first++;
      one.second.push_back(i + 1);
    }
    if (x == 2)
    {
      two.first++;
      two.second.push_back(i + 1);
    }
    if (x == 3)
    {
      three.first++;
      three.second.push_back(i + 1);
    }
  }
  mn = min(mn, one.first);
  mn = min(mn, two.first);
  mn = min(mn, three.first);
  cout << mn << endl;
  if (mn > 0)
  {
    for (int i = 0; i < mn; i++)
      cout << one.second[i] << ' ' << two.second[i] << ' '
           << three.second[i] << ' ' << endl;
  }
  return 0;
}