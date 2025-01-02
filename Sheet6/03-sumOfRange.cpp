#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long num1, num2, all = 0, even = 0, odd = 0, mi, mx;
  cin >> num1 >> num2;
 if (num2 >= num1) {
  mi = num1;
  mx = num2;
 }
 else {
  mi = num2;
  mx = num1;
 }
 all = (mi + mx) * (mx - mi + 1) / 2;

 odd = pow(((mx + (mx % 2)) / 2), 2) - pow(((mi - (mi % 2)) / 2), 2);
  even = (pow(((mx - (mx % 2)) / 2), 2) + ((mx - (mx % 2)) / 2)) - (pow((((mi + (mi % 2)) - 2) / 2), 2) + (((mi + (mi % 2)) - 2) / 2));
  cout << all << endl
      << even << endl
       << odd << endl;
}