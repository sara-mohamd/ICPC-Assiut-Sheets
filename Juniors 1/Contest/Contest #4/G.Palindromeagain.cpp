#include <bits/stdc++.h>
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL); }
int main()
{
  fast();
  string s;
  cin >> s;
  vector<int> f(26);
  for (int i = 0; i < s.size(); i++)
    f[s[i] - 'a']++;
  int k = 25;
  for (int i = 0; i < k;)
  {
    while (i < k && f[i] % 2 == 0)
      i++;
    while (i < k && f[k] % 2 == 0)
      k--;
    if (i < k)
      f[i]++, f[k]--;
    i++, k--;
  }

  char odd = '1';
  for (int i = 0; i < 26; i++)
    if (f[i] % 2)
      odd = i + 'a';
  string left = "";
  for (int i = 0; i < 26; i++)
  {
    if (f[i] <= 0)
      continue;
    while (f[i] >= 2)
    {
      left += char(i + 'a');
      f[i] -= 2;
    }
  }
  string right = left;
  reverse(right.begin(), right.end());
  if ((s.size() & 1))
    cout << left + odd + right << '\n';
  else
    cout << left + right << '\n';
}