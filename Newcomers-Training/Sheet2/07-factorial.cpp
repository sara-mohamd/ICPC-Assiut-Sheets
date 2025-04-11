#include <iostream>
#include <vector>

using namespace std;
int main()
{
  int testNumber;
  cin >> testNumber;
  int number;
  for (int i = 0; i < testNumber; i++)
  {
    cin >> number;
    long long sum = 1;
    if (number == 0 || number == 1)
      cout << 1 << endl;
    else
    {
      for (int j = 1; j <= number; j++)
        sum *= j;
      cout << sum << endl;
    }
  }
  return 0;
}