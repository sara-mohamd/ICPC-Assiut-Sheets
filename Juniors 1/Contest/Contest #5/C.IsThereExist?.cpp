#include <bits/stdc++.h>
#define int long long
#define sz(x) (x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int a, b;
  cin >> a >> b;
  if (a != 2 && b != 2)
    cout << "Yes\n";
  else
    cout << "NO\n";
}