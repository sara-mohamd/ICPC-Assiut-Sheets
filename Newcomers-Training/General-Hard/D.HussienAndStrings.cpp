#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  long long sum = 0;
  int freq[27] = {0};
  cin >> s >> t;
  string temp1 = s, temp2 = t;
  sort(temp1.begin(), temp1.end());
  sort(temp2.begin(), temp2.end());
  if (s.length() != t.length() || temp1 != temp2)
    cout << "NO\n";
  else
  {
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] != t[i])
        sum++;
      freq[s[i] - 'a']++;
    }
    if (sum == 2)
      cout << "YES\n";
    else
    {
      if (sum == 0)
      {
        for (int i = 0; i < 26; i++)
        {
          if (freq[i] > 1)
          {
            cout << "YES\n";
            return 0;
          }
        }
      }
      cout << "NO\n";
    }
  }
}