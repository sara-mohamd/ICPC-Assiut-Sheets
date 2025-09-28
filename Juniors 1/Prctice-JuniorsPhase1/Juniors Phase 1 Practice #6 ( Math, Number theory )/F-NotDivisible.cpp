#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }
const int SIZE = 1e6 + 10;
vector<bool> divisors(SIZE, true);

void isDiviable(vector<int> v, int n)
{
  int mx = v[n - 1];
  for (int i = 0; i < n; i++)
  {
    int x = v[i];
    if (divisors[x])
      for (int p = x + x; p <= mx; p += x)
        divisors[p] = false;
  }
}

signed main()
{
  fast();

  int n, total = 0;
  cin >> n;
  vector<int> v(n);
  map<int, int> mp;

  for (auto &i : v)
  {
    cin >> i;
    mp[i]++;
  }

  // Function Call
  sort(all(v));
  isDiviable(v, n);
  for (auto i : v)
    if (divisors[i] && mp[i] == 1)
      total++;

  cout << total << '\n';
}