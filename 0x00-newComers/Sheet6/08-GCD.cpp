#include <iostream>
using namespace std;
long long GCD(long long a, long long b)
{
  while (b != 0)
  {
    long long r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main()
{
  long long a, b;
  cin >> a >> b;
  cout << GCD(a, b);
  cout << " " << (a * b) / GCD(a, b);
  return 0;
}