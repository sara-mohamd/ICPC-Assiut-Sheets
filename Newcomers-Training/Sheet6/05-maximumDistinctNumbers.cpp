#include <iostream>
#include <cmath>
using namespace std;

long long sum(long long n)
{
  return (n * (n + 1)) / 2;
}
int main()
{
  long long num;
  cin >> num;
  long long n = sqrt(2 * num);
  if (sum(n) <= num)
    cout << n << endl;
  else
  {
    n = sqrt((2 * num) - n);
    cout << n << endl;
  }
  return 0;
}
