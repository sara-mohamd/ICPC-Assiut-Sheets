#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int opsNumber;
  cin >> opsNumber;
  vector<int> v(opsNumber);
  for (int i = 0; i < v.size(); i++)
    cin >> v[i];

  int even, odd, positive, negative;
  even = odd = positive = negative = 0;

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] % 2 == 0)
      even++;
    else
      odd++;
    if (v[i] < 0)
      negative++;
    else if (v[i] > 0)
      positive++;
  }

  cout << "Even: " << even << endl
       << "Odd: " << odd << endl
       << "Positive: " << positive << endl
       << "Negative: " << negative;
  return 0;
}