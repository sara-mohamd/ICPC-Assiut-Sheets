#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n;
  cin >> n;
  map<string, int> mp;
  string s;
  while (n--)
  {
    cin >> s;
    if (mp[s] == 0)
    {
      cout << "OK\n";
      mp[s]++;
    }
    else
      cout << s << mp[s]++ << '\n';
  }
}