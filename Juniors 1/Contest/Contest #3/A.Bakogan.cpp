#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  char c;
  cin >> c;
  if (c == 'z')
    cout << "a\n";
  else
    cout << char(c + 1) << '\n';
}