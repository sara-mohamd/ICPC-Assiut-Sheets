#include <iostream>
using namespace std;

int main()
{
  long long n, sum = 0;
  cin >> n;
  for (long long i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
      ((n / i) == i) ? sum += i : sum += (i + (n / i));
  }
  cout << sum << endl;
  return 0;
}