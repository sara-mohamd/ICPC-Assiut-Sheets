#include <iostream>
#include <cmath>
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

int main()
{
  int n1, n2;
  long long nPr, nCr;
  cin >> n1 >> n2;
  nPr = fact(n1) / fact(abs(n1 - n2));
  nCr = fact(n1) / (fact(n1 - n2) * fact(n2));
  cout << nCr << " " << nPr << endl;
}