#include <bits/stdc++.h>
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

int main()
{
  fast();
  int test;
  cin >> test;
  while (test--)
  {
    string s;
    cin >> s;
    vector<int> freq(30);
    for (auto i : s)
      freq[i - 'a']++;
    int c = 0, found = 0;
    char first, second;
    for (int i = 0; i < s.size() && !found; i++)
    {
      while (c <= 26 && freq [c] == 0)
        c++;
      if (freq[c] && char(c + 'a') < s[i])
        found = 1, first = char(c + 'a'), second = s[i];
      else if (freq[c] && char(c + 'a') == s[i])
        c++;
    }
    if (found)
    {
      for (auto &i : s)
      {
        if (i == second)
          i = first;
        else if (i == first)
          i = second;
      }
    }
    cout << s << '\n';
  }
  return 0;
}
