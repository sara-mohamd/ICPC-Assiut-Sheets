#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
  long long a = 0, b = 1, c = 0;
  for (int i = 1; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
bool isPrime(long long n)
{
  if (n <= 1)
    return 0;
  for (long long i = 2; i * i <= n; i++)
    if (n % i == 0)
      return 0;
  return 1;
}
int main()
{
  long long f[52] = {0};
  f[1] = 1;
  // {0, 0, 1, }
  for (int i = 1; i <= 48; i++)
    f[i + 1] = fib(i);
  // int p[52] = {0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0};
  int p[52] = {0};
  // {0,1,1,2,3,5,}
  for (int i = 1; i < 48; i++)
  {

    p[i] = isPrime(f[i]);
  }
  for (int i = 0; i < 20; i++)
  {
    cout << f[i] << ',';
  }
  cout << "\n--------------\n";
  for (int i = 0; i < 50; i++)
  {
    cout << p[i] << ',';
  }
  cout << endl;
}