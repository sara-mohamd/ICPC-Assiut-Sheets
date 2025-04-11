#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, c;
  cin >> s >> c;
  s = ' ' + s;
  c = ' ' + c;
  int ctr = 1;
  for (int i = 1; i <= c.length(); i++)
  {
    if (s[ctr] == c[i])
      ctr++;
  }
  cout << ctr << endl;
}