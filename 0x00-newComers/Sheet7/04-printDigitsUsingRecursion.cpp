#include <bits/stdc++.h>
using namespace std;
void display(string s, int i = 0)
{
  if (i < s.length())
  {
    cout << s[i] << ' ';
    display(s, ++i);
  }
  else
    return;
}
int main()
{
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> s;
    display(s);
    cout << endl;
  }
}