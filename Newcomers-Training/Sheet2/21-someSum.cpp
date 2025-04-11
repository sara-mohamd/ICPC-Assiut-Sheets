#include <iostream>
#include <cmath>

using namespace std;

int sumDigits(int, int);
int main()
{
  int N,    // range 1 to N
      a, b; // sum of number digits itself between a and b.
  int sum, totalSum = 0, digits = 1;
  cin >> N >> a >> b;

  for (int i = 1; i <= N; i++)
  {
    sum = 0;
    if (i != 0)
    {
      digits = log10(i) + 1;
      if (digits == 1)
        sum += i;
      else
        sum = sumDigits(digits, i);
    }
    if (sum <= a && sum >= b)
      totalSum += i;
  }

  cout << totalSum;
}

int sumDigits(int digits, int num)
{
  int sum = 0;
  while (digits)
  {
    sum = num % 10;
    num /= 10;
    digits--;
  }
  return sum;
}