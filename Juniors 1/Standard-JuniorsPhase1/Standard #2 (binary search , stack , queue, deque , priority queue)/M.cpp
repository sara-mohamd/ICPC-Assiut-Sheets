#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  vector<int> v(1, 0), freq(1000006, 0);
  int n, q, x, mn = INT_MAX, mx = 0;
  cin >> n >> q;
  while (n--)
  {
    cin >> x;
    if (freq[x] == 0)
    {
      v.push_back(x);
      freq[x] = 1;
    }
    if (x > mx)
      mx = x;
    if (mn > x)
      mn = x;
  }
  mn;
  sort(all(v));
  n = v.size();
  while (q--)
  {
    int i;
    cin >> i;

    int n = v.size() - 1;
    int idx = abs(i - mn);
    idx++;

    cout << idx - 1 << ' ' << n - idx << endl;
  }
}