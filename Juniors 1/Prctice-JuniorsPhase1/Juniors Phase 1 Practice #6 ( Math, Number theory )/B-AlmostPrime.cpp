#include <bits/stdc++.h>
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(NULL); }

const int N = 30010;
vector<bool> isPrime(N, true);
bool Divisors(int x)
{
  int count = 0;
  for (int i = 1; i * i <= x; i++)
  {
    if(x % i == 0 && (isPrime[i] || isPrime[x / i]))
    {
      if(isPrime[i])
        count++;
      if(isPrime[x / i] && i * i != x)
        count++;
    }
  }
  return count == 2;
}
signed main()
{
  fast();
  // Pre-procsseing.
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i < N; i++)
    if(isPrime[i])
      for (int p = i * i; p < N; p += i)
        isPrime[p] = false;

  int n, answer = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
    answer += Divisors(i);
  cout << answer << '\n';
  return 0;
}
