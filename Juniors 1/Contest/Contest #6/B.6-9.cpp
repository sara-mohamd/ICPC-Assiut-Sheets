#include <bits/stdc++.h>
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }
int getSum(string s)
{
  int sum = 0;
  for (int i = 0; i < s.length(); i++)
    sum += (s[i] - '0');
  return sum;
}
signed main()
{
  fast();
  string s;
  cin >> s;
  int sum = getSum(s), n = s.length() - 1;

  if ((sum % 3 == 0 && ((s[n] - '0') % 2 == 0)) && sum % 9 == 0)
    cout << "6 9\n";
  else if (sum % 3 == 0 && ((s[n] - '0') % 2 == 0))
    cout << "6\n";
  else if (sum % 9 == 0)
    cout << "9\n";
  else
    cout << "-1\n";
}