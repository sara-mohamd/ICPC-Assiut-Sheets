#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  bool flag = 1;
  int s1_size = s1.length(),
      s2_size = s2.length(),
      freqC[26]{0}, freqS[26] = {0};
  for (int i = 0; i < s1_size; i++)
  {
    if (s1[i] == ' ')
      continue;
    if (s1[i] >= 'a' && s1[i] <= 'z')
    {
      freqS[s1[i] - 'a']++;
    }
    if (s1[i] >= 'A' && s1[i] <= 'Z')
    {
      freqC[s1[i] - 'A']++;
    }
  }
  for (int i = 0; i < s2_size; i++)
  {
    if (s2[i] == ' ')
      continue;
    if (s2[i] >= 'a' && s2[i] <= 'z')
    {
      if (freqS[s2[i] - 'a'])
      {
        freqS[s2[i] - 'a']--;
      }
      else
      {
        flag = 0;
        break;
      }
    }

    if (s2[i] >= 'A' && s2[i] <= 'Z')
    {
      if (freqC[s2[i] - 'A'])
      {
        freqC[s2[i] - 'A']--;
      }
      else
      {
        flag = 0;
        break;
      }
    }
  }

  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";
}