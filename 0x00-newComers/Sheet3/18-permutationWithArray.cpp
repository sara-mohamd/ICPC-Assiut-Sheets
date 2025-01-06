#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int size;
  bool flag = 1;
  cin >> size;

  int a[size], b[size];

  for (int i = 0; i < size; i++)
    cin >> a[i];

  for (int i = 0; i < size; i++)
    cin >> b[i];

  sort(a, a + size);
  sort(b, b + size);

  for (int i = 0; i < size; i++)
  {
    if (a[i] != b[i])
    {
      cout << "no";
      return 0;
    }
  }
  cout
      << "yes";
  return 0;
}