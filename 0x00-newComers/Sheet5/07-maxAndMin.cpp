#include <iostream>
using namespace std;
void solve(int t)
{
  int n;
  long long min = 100001;
  long long max = 0;
  for (int i = 0; i < t; i++)
  {
    cin >> n;
    if (n > max)
      max = n;
    if (n < min)
      min = n;
  }
  cout << min << " " << max;
}
int main()
{
  int test;
  cin >> test;
  solve(test);
  return 0;
}