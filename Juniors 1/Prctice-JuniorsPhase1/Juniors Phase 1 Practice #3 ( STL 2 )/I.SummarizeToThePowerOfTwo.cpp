#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define IsPowerOf2(n) ((n) > 0 && !((n) & ((n) - 1)))
typedef long long ll;
using namespace std;

int main()
{
  vector<ll> p2;
  for (int i = 0; i <= 33; i++)
  {
    p2.push_back(pow(2, i));
  }

  int n, ans = 0, x;
  cin >> n;
  map<ll, int> mp, state;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    mp[v[i]]++;
    state[x] = 0;
  }
  for (auto num : v)
  {
    for (int i = 0; i < 33; i++)
    {
      if (num > p2[i])
        continue;
      int val = p2[i] - num;
      // cout << "1) " << num << " --------> " << val << '\n';
      if ((val == num || val == 0) && mp[num] > 1)
      {
        // cout << "1) " << num << " --------> " << val << '\n';
        state[num] = 1;
        goto temp;
      }
      else if (mp[val] > 0 && (val != num && val != 0))
      {
        // cout << "2) " << num << " --------> " << val << '\n';
        state[num] = 1, state[val] = 1;
        goto temp;
      }
    }
  temp:;
  }

  for (auto p : v)
    if (state[p] == 0)
      ans++;
  cout << ans << '\n';
}