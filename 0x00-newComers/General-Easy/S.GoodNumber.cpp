#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, ans = 0;
  cin >> n >> k;
  int sum = k * (k + 1) / 2;
  while (n--)
  {
    int num, freq[20] = {0};
    long long realSum = 0, zeros = 0;
    cin >> num;
    while (num)
    {
      int digit = num % 10;
      num /= 10;
      if (digit <= k && !freq[digit])
      {
        realSum += digit;
        freq[digit]++;
      }
      if (digit == 0)
        zeros = 1;
    }
    if (realSum == sum && zeros)
      ans++;
  }

  cout << ans << endl;
}