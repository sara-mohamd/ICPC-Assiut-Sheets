#include <iostream>
using namespace std;
void solve(int x)
{
  for (int i = 1; i < x; i++)
    cout << i << " ";
  cout << x;
}
int main()
{
  int n;
  cin >> n;
  solve(n);
  return 0;
}