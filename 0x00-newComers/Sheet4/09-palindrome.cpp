#include <iostream>
using namespace std;

int main()
{
  string p;
  cin >> p;
  bool isPlaind = true;
  if (p.length() == 1)
  {
    cout << "YES";
    return 0;
  }

  int size = p.length();
  for (int i = 0; i < size / 2; i++)
  {
    if (p[i] != p[size - i - 1])
    {
      isPlaind = false;
      break;
    }
  }
  if (isPlaind)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}