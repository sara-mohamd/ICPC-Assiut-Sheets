#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  char s;
  for (int i = 0; i <= a + b; i++)
  {
    cin >> s;
    if (i == a)
    {
      if (s != '-')
      {
        cout << "No";
        return 0;
      }
    }
    else if (!((s - '0') >= 0 && (s - '0') <= 9))
    {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}