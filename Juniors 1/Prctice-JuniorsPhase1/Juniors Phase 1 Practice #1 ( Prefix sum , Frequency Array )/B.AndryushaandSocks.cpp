#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ans = 0, x = ans;
  cin >> n;
  n *= 2;
  vector<int> v(n), freq(100005, 0);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++)
  {
    if (freq[v[i]] == 0)
    {
      freq[v[i]] = 1;
      x++;
      ans = max(x, ans);
    }
    else
    {
      x--;
      freq[v[i]] = 0;
    }
  }

  cout << ans << endl;
}