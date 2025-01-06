#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double pi = 3.141592653, r;
  cin >> r;
  cout << fixed << setprecision(9) << r * r * pi;
  return 0;
}