#include <bits/stdc++.h>
#define int long long
using namespace std;

void fast(){ ios::sync_with_stdio(false), cin.tie(NULL); }

const int N = 1e6 + 10;
const int MOD = 1e9 + 7;

vector<int> fact(N);

// Function to compute (base^exp) % MOD
int power(int base, int exp)
{
  int res = 1;
  base %= MOD;
  while (exp > 0)
  {
    if (exp % 2 == 1)
    {
      res = (res * base) % MOD;
    }
    base = (base * base) % MOD;
    exp /= 2;
  }
  return res;
}

// Function to find the modular inverse using Fermat's Little Theorem
int modInverse(int n)
{
  return power(n, MOD - 2);
}

void process()
{
  fact[0] = 1;
  for (int i = 1; i < N; i++)
  {
    fact[i] = (fact[i - 1] * i) % MOD;
  }
}

signed main()
{
  fast();
  process();
  string s;
  cin >> s;

  int size = s.size();
  int ans = fact[size];

  vector<int> freq(26, 0);
  for (char i : s)
  {
    freq[i - 'a']++;
  }

  for (int i : freq)
  {
    if (i > 1)
    {
      ans = (ans * modInverse(fact[i])) % MOD;
    }
  }

  cout << ans << '\n';
  return 0;
}