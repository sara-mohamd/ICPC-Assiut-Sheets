#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<bool> prime(1e6 + 6, true);
  prime[0] = prime[1] = false;
  for (int p = 2; p * p <= 1e6; p++)
  {
    if (prime[p])
    {
      for (int i = p * p; i <= 1e6; i += p)
        prime[i] = false;
    }
  }
  int n, x;
  cin >> n >> x;
  x = x % 4;
  int nums[n] = {0}, ops[n] = {0},
      two[5] = {0, 2, 4, 8, 6},
      three[5] = {0, 3, 9, 7, 1};

  for (int i = 0; i < n; i++)
    cin >> nums[i];
  for (int i = 0; i < n; i++)
    cin >> ops[i];

  for (int i = 0; i < n; i++)
  {
    if (ops[i] == 1)

      (prime[nums[i]]) ? cout << (nums[i] * 5 * three[x]) % 10 << ' ' : cout << "-1 ";
    else
      cout << (nums[i] * 5 * two[x]) % 10 << ' ';
  }
}