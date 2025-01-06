#include <iostream>
using namespace std;
int main()
{
  long long l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  if (l1 > l2)
  {
    if (l1 > r2)
      cout << -1;
    else
    {
      if (r1 > r2)
        cout << l1 << " " << r2;
      else
        cout << l1 << " " << r1;
    }
  }
  else
  {
    if (l2 > r1)
      cout << -1;
    else
    {
      if (r2 > r1)
        cout << l2 << " " << r1;
      else
        cout << l2 << " " << r2;
    }
  }
  return 0;
}