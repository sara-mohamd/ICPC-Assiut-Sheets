#include <bits/stdc++.h>
using namespace std;

int main()
{
  int ok = 1;
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i * i <= n; i++)
  {
    if (s[i] == '?' && s[n - (i + 1)] == '?')
    {
      s[n - (i + 1)] = s[i] = 'a';
    }
    if (s[i] == '?')
      s[i] = s[n - (i + 1)];
    else if (s[n - (i + 1)] == '?')
      s[n - (i + 1)] = s[i];
  }
  string t = s;
  reverse(t.begin(), t.end());

  if (t == s)
    cout << s << endl;
  else
    cout << "-1\n";
}