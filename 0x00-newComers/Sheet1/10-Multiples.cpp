#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if ((x % y == 0) or (y % x == 0))
    cout << "Multiples" << endl;
  else
    cout << "No Multiples" << endl;
  return 0;
}