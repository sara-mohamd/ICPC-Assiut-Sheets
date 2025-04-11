#include <iostream>
using namespace std;

void solve(int n, char c)
{
  for (int i = 0; i < n; i++)
  {
    cout << c;
    if (i + 1 < n)
      cout << " ";
  }
  cout << endl;
}

int main()
{
  int test;
  cin >> test;
  int n;
  char c;
  while (test--)
  {
    cin >> n;
    cin >> c;
    solve(n, c);
  }
}