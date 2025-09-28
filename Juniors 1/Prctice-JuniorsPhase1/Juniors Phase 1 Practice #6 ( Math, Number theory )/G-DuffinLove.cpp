#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

signed main()
{
  fast();
  int n;
  cin >> n;
  vector<int> factors;

  int flag = 0;
  while (n % 2 == 0)
  {
    flag = 1;
    n = n / 2;
  }
  if (flag)
    factors.push_back(2);
  for (int i = 3; i * i <= n; i = i + 2)
  {
    int ctr = 0;
    while (n % i == 0)
            ctr = 1, n = n / i;
    if(ctr)
      factors.push_back(i);
  }

  if (n > 2)
    factors.push_back(n);

  int answer = 1;
  for (auto i : factors)
    answer *= i;
  cout << answer << '\n';
}