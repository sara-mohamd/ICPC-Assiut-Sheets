#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  string s;
  cin >> s;
  vector<int> freq(26);
  for (auto i : s)
    freq[i - 'a']++;

  for (int i = 0; i < 25; i++)
  {
    freq[i + 1] += freq[i] / 2;
    (freq[i] % 2)? freq[i] = 1 : freq[i] = 0;
  }
  for (int i = 25; i >= 0; i--)
  {
    while (freq[i]--)
    {
      cout << char(i + 'a');
    }
  }
  cout << '\n';
}
