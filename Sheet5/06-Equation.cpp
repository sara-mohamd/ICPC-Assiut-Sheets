#include <iostream>
#include <cmath>
using namespace std;
void solve(int x, int n)
{
  long long int sum = 0;
  for (int i = 2; i <= n; i += 2)
    sum += pow(x, i);
  cout << sum;
}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  solve(n1, n2);
  return 0;
}