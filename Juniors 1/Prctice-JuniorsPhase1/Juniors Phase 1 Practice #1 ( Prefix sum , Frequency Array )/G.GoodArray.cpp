#include <bits/stdc++.h>
using namespace std;
int freq[10000007] = {0};
int main()
{
  int n, ans = 0;
  cin >> n;
  long long sum = 0;
  vector<int> v;
  int a[n] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    freq[a[i]]++;
    sum += a[i];
  }

  for (int i = 0; i < n; i++)
  {
    if ((sum - a[i]) % 2 != 0 || (sum - a[i]) / 2 > 1e6)
      continue;
    freq[a[i]]--;
    if (freq[(sum - a[i]) / 2] >= 1)
    {
      ans++;
      v.push_back(i + 1);
    }
    freq[a[i]]++;
  }

  cout << ans << endl;
  if (ans > 0)
  {
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << ' ';
    }
  }
}