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
  int n;
  cin >> n;
  vector<vector<int>> v;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    vector<int> freq(26);
    for (int i = 0; i < sz(s); i++)
    {
      freq[s[i] - 'a']++;
    }
    v.push_back(freq);
  }
  if (n == 1)
  {
    cout << s[0] << '\n';
    return 0;
  }
  string left = "", right = "";
  for (int i = 0; i * 2 < n; i++)
  {
    int idx = 0, flg = 0;
    while (idx < 26)
    {
      if (v[i][idx] > 0 && v[n - (i + 1)][idx] > 0)
      {
        left += char(idx + 'a'), flg = 1;
        break;
      }
      idx++;
    }
    if (flg == 0)
      break;
  }
  if (left.length() < n / 2)
    cout << "-1\n";
  else
  {
    int idx = sz(left);
    if (n % 2)
      idx--;
    right = left.substr(0, idx);
    reverse(all(right));
    cout << left + right << '\n';
  }
}