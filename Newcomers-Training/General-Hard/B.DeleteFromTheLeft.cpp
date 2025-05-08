#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  string s, t;
  long long sum = 0, ctr = 0;
  cin >> s >> t;
  if (s.length() < t.length())
    swap(s, t);
  if (s.length() > t.length())
  {
    sum = s.length() - t.length();
    s = s.substr(sum);
  }
  // sum = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != t[i])
    {
      s[i] = '.';
      t[i] = '.';
    }
  }
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '.')
      break;
    ctr++;
  }

  cout << ((s.length() - ctr) * 2) + sum << endl;
}