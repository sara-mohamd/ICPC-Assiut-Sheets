#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios_base::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int r1, r2, answer = 0;
  cin >> r1 >> r2;
  int x = 0;
  for (int bit = 0; bit < 63; bit++)
  {
    x += (1LL << bit);
    for (int i = 0; i < bit; i++)
    {
      int num = x - (1LL << i); // remove i-th bit
      if (num >= r1 && num <= r2)
        answer++;
    }
  }

  cout << answer << '\n';
}