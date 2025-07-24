#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
using namespace std;

void speed() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  speed();
  int test;
  cin >> test;
  while (test--)
  {
    int n;
    string s;
    cin >> n >> s;

    vector<char> odd, even;
    for (char c : s)
    {
      if ((c - '0') % 2)
        odd.push_back(c);

      if (sz(odd) == 2)
        break;
    }

    if (sz(odd) == 2)
      cout << odd[0] << odd[1] << '\n';
    else
      cout << "-1\n";
  }
}
