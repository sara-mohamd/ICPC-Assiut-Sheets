#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  string s;
  cin >> s;

  int n = s.size() - 1;
  int sum = 0;
  for (int mask = 0; mask < (1 << n); mask++)
  {
    int total = 0;
    int current = 0;
    for (int i = 0; i < s.size(); i++)
    {
      current = (current * 10) + (s[i] - '0');
      if (mask & (1 << i))
        total += current, current = 0;
    }
    total += current;
    sum += total;
  }
  cout << sum << '\n';
}
