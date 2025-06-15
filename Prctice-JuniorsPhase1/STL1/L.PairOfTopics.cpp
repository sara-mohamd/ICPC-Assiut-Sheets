#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;
void speed() { ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr); }
int main()
{
  speed();
  ll n, ctr = 0;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  vector<ll> ans(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].first;
  for (int i = 0; i < n; i++)
    cin >> v[i].second;
  for (int i = 0; i < n; i++)
    ans[i] = v[i].first - v[i].second;
  sort(all(ans));

  for (int i = 0; i < n; i++)
  {
    int temp = ans[i];
    temp *= -1;
    auto it = upper_bound(all(ans), temp) - ans.begin();
    if (it <= i)
    {
      cout << it << ' ';
      it = i + 1;
      cout << it << '\n';
    }
    ctr += (n - it);
  }
  cout << ctr << '\n';
}