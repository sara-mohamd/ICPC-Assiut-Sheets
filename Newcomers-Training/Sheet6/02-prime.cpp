#include <iostream>
using namespace std;

int main()
{
  bool flag = 1;
  long long num;
  cin >> num;

  if (num <= 1)
    flag = 0;
  else
  {
    for (long long i = 2; i * i <= num; i++)
      if (num % i == 0)
      {
        flag = 0;
      }
  }
  if (flag)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}