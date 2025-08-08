#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;

int main()
{
  ll n, q;
  cin >> n >> q;
  vector<int> v(n + 1, 0), temp;
  deque<int> dq;
  for (int i = 1; i <= n; i++)
    cin >> v[i];
  if (q == 0)
    return 0;
  temp = v;
  // for (int i = 0; i <= n; ++i)
  //   cout << v[i] << ' ';
  // cout << "\n************\n";
  int mx = *max_element(all(v));
  auto it = find(all(v), mx) - v.begin();

  // cout << it << endl;
  // cout << mx << endl;
  for (int i = it + 1; i <= n; i++)
    dq.push_back(v[i]);
  if (it > 2)
    sort(temp.begin() + 1, temp.begin() + it - 1);
  for (int i = 1; i < it; i++)
    dq.push_back(temp[i]);
  cout << "********temp****8\n";
  for (int i = 0; i <= it; ++i)
    cout << temp[i] << ' ';
  cout << "********DQ****8\n";
  for (int i = 0; i <= dq.size(); ++i)
    cout << dq[i] << ' ';
  cout << "\n************\n";
  // 4 2 5 3 1
  // 1 3 2 4
  while (q--)
  {
    ll x;
    cin >> x;

    if (x <= it)
    {
      cout << v[x] << ' ' << v[x + 1] << endl;
    }
    else
    {
      x -= it;
      x %= (n - 1);
      cout << mx << ' ' << dq[x] << endl;
    }
  }
}