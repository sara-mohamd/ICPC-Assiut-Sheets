#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  if (s1.size() != s2.size())
    cout << max(s1.size(), s2.size()) << endl;
  else
  {
    (s1 == s2) ? cout << "-1\n" : cout << s1.length() << endl;
  }
  return 0;
}