#include <iostream>
using namespace std;
long long fact(long long n)
{
  long long sum = 1;
  long temp = 1;
  while (temp <= n)
  {
    sum *= temp;
    temp++;
  }
  return sum;
}

long long nCr(int n, int r)
{
  if (r == 0 || n == r)
    return 1;
  return fact(n) / (fact(n - r) * fact(r));
}

int main()
{
  int lines;
  cin >> lines;

  for (int i = 0; i < lines; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << nCr(i, j) << " ";
    }
    cout << endl;
  }
}