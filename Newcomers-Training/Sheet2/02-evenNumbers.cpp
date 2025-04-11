#include <iostream>
using namespace std;
int main()
{
  int x;
  bool flag = 0;
  cin >> x;
  for (int i = 1; i <= x; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << endl;
      flag = 1;
    }
  }
  if (flag == 0)
    cout << "-1";
  return 0;
}