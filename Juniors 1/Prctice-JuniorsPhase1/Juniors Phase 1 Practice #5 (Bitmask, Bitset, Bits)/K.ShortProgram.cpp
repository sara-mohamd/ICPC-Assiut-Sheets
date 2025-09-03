#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n, p = 0, x, temp;
  cin >> n;
  p = temp = n;
  while (temp--)
  {
    char c;
    cin >> c >> x;
    if (c == '|')
      p |= x;
    else if (c == '&')
      p &= x;
    else if (c == '^')
      p ^= x;
  }
  cout << n << ' ' << p << '\n';
  vector<int> v(3);
  int flag = 0;
  for (int i = 0; i < 12; i++)
  {
    bitset<1> b1, b2;
    b1 = (n >> i);
    b2 = (p >> i);
    cout << b1 << ' ' << b2 << '\n';
    if (b1 == b2)
      continue;
    if (b1 == 0)
      v[0] |= (1 << i);
    else
      v[1] &= ~(1 << i);
    flag++;
  }
  cout << v[1] << '\n';
  if (flag)
  {
    cout << flag << '\n';
    for (int i = 0; i < 2; i++)
    {
      if (v[i] == 0)
        continue;
      if (i == 0)
        cout << "| " << v[i] << '\n';
      else
        cout << "& " << v[i] << '\n';
    }
  }
  else
    cout << "0\n";
  return 0;
}