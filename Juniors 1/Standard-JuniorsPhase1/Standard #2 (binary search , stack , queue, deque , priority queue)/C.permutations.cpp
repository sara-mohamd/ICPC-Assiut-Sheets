#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n, q, x;
  cin >> n >> q;
  vector<char> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  while (q--)
  {
    string temp, ans;
    cin >> temp >> x;
    while (x--)
    {
      if (temp == "next_permutation")
        ans = next_permutation(v.begin(), v.end());
      else
        ans = prev_permutation(v.begin(), v.end());
    }
    for (auto i : v)
      cout << i;
    cout << '\n';
  }
}