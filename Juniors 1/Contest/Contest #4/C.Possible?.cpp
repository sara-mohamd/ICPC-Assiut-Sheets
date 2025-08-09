#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  string s;
  cin >> s;
  int mx = 0, n = sz(s), idx = 0;
  vector<pair<int, char>> freq(26);
  for (int i = 0; i < 26; i++)
    freq[i].second = char(i + 'a');
  for (auto i : s)
  {
    freq[i - 'a'].first++, mx = max(mx, freq[i - 'a'].first);
  }
  string s2 = s;
  for (int i = 0; i < n; i++)
    s2[i] = '.';
  if (mx > (n - mx) + 1 || freq[7].first != 0)
  {
    cout << "impossible\n";
    return 0;
  }
  sort(all(freq), greater<pair<int, char>>());
  int i = 0, start = 0;
  while (freq[i].first)
  {
    int idx = start;
    while (freq[i].first)
    {
      while (s2[idx] != '.' && idx < n)
      {
        idx++;
      }
      s2[idx] = freq[i].second;
      idx += 2;
      freq[i].first--;
    }
    start++;
    i++;
  }
  cout << s2 << '\n';
}