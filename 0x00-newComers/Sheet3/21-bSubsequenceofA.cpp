#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int aSize, bSize;
  cin >> aSize >> bSize;

  int a[aSize], b[bSize];
  if (bSize > aSize)
  {
    cout << "NO";
    return 0;
  }
  for (int i = 0; i < aSize; i++)
    cin >> a[i];
  for (int i = 0; i < bSize; i++)
    cin >> b[i];

  int test[bSize] = {0};
  for (int i = 0; i < bSize; i++)
  {
    for (int j = 0; j < aSize; j++)
    {
      if (b[i] == a[j])
      {
        test[i] = j;
        continue;
      }
    }
  }

  if (is_sorted(test, test + bSize))
    cout << "YES";
  else
    cout << "NO";
  return 0;
}