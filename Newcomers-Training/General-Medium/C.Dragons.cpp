#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long points, n, ok = 1;
  cin >> points >> n;
  pair<int, int> drg[n];

  for (int i = 0; i < n; i++)
  {
    cin >> drg[i].first >> drg[i].second;
  }
  sort(drg, drg + n);
  for (int i = 0; i < n; i++)
  {
    if (points > drg[i].first)
      points += drg[i].second;
    else
    {
      ok = 0;
      break;
    }
  }

  if (ok)
    cout << "YES\n";
  else
    cout << "NO\n";
}