#include <iostream>
#include <string>

using namespace std;
int main()
{
  string x;
  long long divisor, result = 0;
  cin >> x >> divisor;

  for (int i = 0; i < x.size(); i++)
  {
    result *= 10;
    result += x[i] - '0';
    result %= divisor;
  }
  if (result == 0)
  {
    cout << "YES";
  }
  else
    cout << "NO";
  return 0;
}