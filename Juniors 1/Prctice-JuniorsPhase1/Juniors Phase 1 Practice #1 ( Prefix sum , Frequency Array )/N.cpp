#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int test;
  cin >> s >> test;
  s = ' ' + s;
  int pref[s.length() + 1] = {0};
  for (int i = 2; i <= s.length(); i++)
    if (s[i] == s[i - 1])
      pref[i] = 1;
  for (int i = 1; i <= s.length(); i++)
  {
    pref[i] += pref[i - 1];
    // cout << pref[i] << ' ';
  }
  // cout << endl;

  while (test--)
  {
    int l, r;
    cin >> l >> r;
    cout << pref[r] - pref[l] << endl;
  }
}