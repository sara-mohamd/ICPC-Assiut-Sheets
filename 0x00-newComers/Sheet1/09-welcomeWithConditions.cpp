#include <iostream>
#include <cmath>
using namespace std;
bool CheckGreater(int, int);
int main()
{
  int x, y;
  cin >> x >> y;
  if (!CheckGreater(x, y))
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}

bool CheckGreater(int x, int y)
{
  return x >= y;
}