#include <bits/stdc++.h>
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int test;
  cin >> test;
  while (test--)
  {
    string s;
    cin >> s;

    if (next_permutation(all(s)))
      cout << s << '\n';
    else
      cout << "-1\n";
  }
}
