#include <iostream>
using namespace std;

int main()
{
  int limit;
  cin >> limit;

  int _1st = 0, _2ed = 1;

  if (limit == 0 || limit == 1)
    cout << _1st;
  else
  {
    cout << _1st << " " << _2ed << " ";
    int sum = 0;
    for (int i = 0; i < limit - 2; i++)
    {
      sum = _1st + _2ed;
      _1st = _2ed;
      _2ed = sum;
      cout << sum << " ";
    }
  }

  return 0;
}
