#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int idx = 0, ans = 1;
  vector<int> v(3);
  for (auto &i : v)
    cin >> i;

  for (int i = 0; i < 3; i++)
    if(v[i] > v[idx])
      ans = i + 1, idx = i;


  cout << ans << '\n';
}
