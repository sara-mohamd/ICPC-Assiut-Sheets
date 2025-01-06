#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, q, x1, x2, c;
  cin >> n >> q;
  int arr[1000001] = {0};
  while (q--)
  {
    cin >> x1 >> x2;
    if (x1 == 1)
      arr[x2]++;
    else if (x1 == 2)
      cout << arr[x2] << endl;
  }
}