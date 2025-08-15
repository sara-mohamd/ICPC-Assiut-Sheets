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
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '9')
      continue;
    if (s[i] == '0')
      s[i] = '9';
    else
      s[i]++;
    break;
  }
  cout << s << '\n';
}