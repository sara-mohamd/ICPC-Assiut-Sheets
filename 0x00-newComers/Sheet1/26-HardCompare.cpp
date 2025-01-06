#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  double num1 = b * log(a);
  double num2 = d * log(c);

  if (num1 > num2)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}