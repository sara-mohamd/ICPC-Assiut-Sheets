#include <iostream>
using namespace std;
int main()
{
  int num;
  // check if there is prime number
  cin >> num;
  if (num < 2)
  {
    cout << "no primes numbers";
  }
  else
  {
    int start = 2;
    while (start <= num)
    {
      bool flag = 1;
      for (int i = 2; i * i <= start; i++)
      {
        if (!(start % i))
        {
          flag = 0;
          break;
        }
      }
      if (flag)
        cout << start << " ";
      start++;
    }
  }
  return 0;
}