#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, mx = 0;
  cin >> n;
  vector<int> v(n), freq(10000007, 0);
  for (size_t i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      freq[v[i] + v[j]]++;
      if (freq[v[i] + v[j]] > mx)
        mx = freq[v[i] + v[j]];
    }
  }

  cout << mx << endl;
}