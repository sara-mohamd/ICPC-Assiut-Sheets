#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  float arr[n] = {0}, poSum = 0, neSum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] > 0)
    {
      poSum += (ceil(arr[i] / 2));
    }
    else
    {
      neSum += abs(ceil(arr[i] / 2));
    }
  }
  int diff = abs(poSum - neSum);
  for (int i = 0; i < n; i++)
  {
    if ((int)arr[i] % 2 == 0)
      cout << arr[i] / 2 << endl;
    else
    {
      int res = ceil(arr[i] / 2);
      if (diff > 0)
      {
        diff--;
        res--;
      }
      cout << res << endl;
    }
  }
}