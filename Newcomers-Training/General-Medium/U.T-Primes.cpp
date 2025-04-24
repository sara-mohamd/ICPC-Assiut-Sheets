#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<bool> prime(1e6 + 1, true);
  prime[0] = prime[1] = false;
  for (int p = 2; p * p <= 1e6; p++)
  {
    if (prime[p])
    {
      for (int i = p * p; i <= 1e6; i += p)
        prime[i] = false;
    }
  }

  long long n, x;
  cin >> n;
  while (n--)
  {
    cin >> x;
    long long root = sqrt(x);
    if (prime[root] && (double)sqrt(x) == root && root <= 1e6)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}