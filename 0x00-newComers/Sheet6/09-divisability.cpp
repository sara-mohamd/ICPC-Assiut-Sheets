#include <iostream>
using namespace std;

long long sum(long long n)
{
  return (n * (n + 1)) / 2;
}
int main()
{
  long long n1, n2, x, temp = 0;
  cin >> n1 >> n2 >> x;

  long long s = 0;
  if (n2 < n1)
  {
    temp = n2;
    n2 = n1;
    n1 = temp;
  }
  s = sum(n2 / x) * x - sum((n1 - 1) / x) * x;
  cout << s;
}