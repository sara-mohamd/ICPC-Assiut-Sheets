#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int number;
  bool flag = 1;
  cin >> number;
  // numbers less than 2 is not prime
  if (number < 2)
    flag = 0;
  else
  {
    for (int i = 2; i <= sqrt(number); i++)
    {
      if (!(number % i))
      {
        flag = 0;
        break;
      }
    }
  }
}