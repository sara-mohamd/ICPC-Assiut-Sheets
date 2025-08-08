#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, str;
  cin >> s;
  map<string, int> mp;
  for (int i = 0; i < 10; i++)
  {
    cin >> str;
    mp[str] = i;
  }
  for (int i = 0; i < s.length(); i += 10)
  {
    cout << mp[s.substr(i, 10)];
  }
  cout << '\n';
}