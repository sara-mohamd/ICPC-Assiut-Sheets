#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }
vector<int> prime;

const int N = 1000 + 10;
const int MOD = 1e9 + 7;
void sieve()
{

  vector<bool> isPrime(N, true);
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i < N; i++)
    if (isPrime[i])
      for (int p = i * i; p < N; p += i)
        isPrime[p] = false;

  for (int i = 2; i < N; i++)
    if (isPrime[i])
      prime.push_back(i);

}

signed main()
{
  fast();
  sieve();

  // Main-Program
  int n, total = 1;
  cin >> n;
  for (auto p : prime)
  {
    if(p > n)
      break;

    int exponent = 0;
    int pPower = p;

    while (pPower <= n)
    {
      exponent += (n / pPower);
      if (pPower > (n / p))
        break;
      pPower *= p;
    }

    total = (total * ((exponent + 1) % MOD)) % MOD;
  }

  cout << total << '\n';
  return 0;
}
