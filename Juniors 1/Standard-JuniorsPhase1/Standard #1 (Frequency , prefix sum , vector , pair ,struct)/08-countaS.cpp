#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int prefix[s.length() + 1] = {0};
  for (int i = 1; i <= s.length(); i++)
  {
    if (s[i - 1] == 'a')
      prefix[i]++;
    prefix[i] = prefix[i] + prefix[i - 1];
  }
  int q, l, r;
  cin >> q;
  while (q--)
  {
    cin >> l >> r;
    cout << prefix[r] - prefix[l - 1] << endl;
  }
  return 0;
}