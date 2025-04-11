#include <iostream>
using namespace std;

void summation(long long x, long long y) { cout << x + y; }
int main()
{
  long long n1, n2;
  cin >> n1 >> n2;
  summation(n1, n2);
}