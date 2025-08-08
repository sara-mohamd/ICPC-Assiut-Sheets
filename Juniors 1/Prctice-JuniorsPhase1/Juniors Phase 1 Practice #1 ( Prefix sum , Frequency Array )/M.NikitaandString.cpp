#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, s1 = "", s2 = "", s3 = "";
  cin >> s;
  s = ' ' + s + ' ';
  int n = s.size() - 1;
  int p1 = 0, p2 = 0, p3 = 0, a[n + 2] = {0}, b[n + 2] = {0};
  for (int i = 1; i <= n; i++)
  {
    if (s[i] == 'a')
      a[i] = 1;
    else if (s[i] == 'b')
      b[i] = 1;
  }
  for (int i = 1; i <= n; i++)
  {
    a[i] += a[i - 1];
    b[i] += b[i - 1];
  }
  int ans = 0;

  for (int i = 0; i <= n; i++)
  {
    for (int j = i; j <= n; j++)
    {
      ans = max(ans, ((a[n] - a[j]) + (b[j] - b[i]) + a[i]));
    }
  }
  cout << ans << endl;
}
