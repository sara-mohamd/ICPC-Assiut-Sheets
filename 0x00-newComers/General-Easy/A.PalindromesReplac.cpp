#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int size = s.length();

  for (int i = 0; i * 2 < size; i++)
  {
    if (s[i] == '?' && s[size - (i + 1)] == '?')
      s[i] = s[size - (i + 1)] = 'a';
    else if (s[i] == '?')
      s[i] = s[size - (i + 1)];
    else if (s[size - (i + 1)] == '?')
      s[size - (i + 1)] = s[i];
  }
  string s2 = s;
  reverse(s2.begin(), s2.end());
  if (s2 != s)
    cout << "-1\n";
  else
    cout << s << endl;
}