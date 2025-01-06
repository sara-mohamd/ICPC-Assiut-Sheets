#include <iostream>
using namespace std;
void solve(int *n, int *n2)
{
  int temp = *n;
  *n = *n2;
  *n2 = temp;
}
int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  solve(&n1, &n2);
  cout << n1 << " " << n2;
  return 0;
}