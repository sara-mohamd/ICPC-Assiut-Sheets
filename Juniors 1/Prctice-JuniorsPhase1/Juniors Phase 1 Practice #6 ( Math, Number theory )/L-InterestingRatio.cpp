#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }
const int N = 1e7 + 5;
vector<int> primes;
void sieve()
{
  vector<bool> isPrime(N, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i < N; i++)
    if (isPrime[i])
      for (int p = i * i; p < N; p += i)
        isPrime[p] = false;

  for (int i = 0; i < N; i++)
    if (isPrime[i])
      primes.push_back(i);
}

signed main()
{
  fast();
  sieve();

  int t;
  cin >> t;
  while (t--)
  {
    int n, ans = 0;
    cin >> n;
    for (auto p : primes)
    {
      if (p > n)
        break;
      ans += (n / p);
    }
    cout << ans << '\n';
  }
}