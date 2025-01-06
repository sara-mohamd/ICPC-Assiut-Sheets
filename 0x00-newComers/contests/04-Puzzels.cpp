#include <iostream>
using namespace std;
int main()
{
  long long a, b, c, result;
  cin >> a >> b >> c >> result;

  if ((a + b - c) == result || (a + b * c) == result || (a - b + c) == result || (a - b * c) == result || (a * b - c) == result || (a * b + c) == result)
    cout << "YES";
  else
    cout << "NO";
}