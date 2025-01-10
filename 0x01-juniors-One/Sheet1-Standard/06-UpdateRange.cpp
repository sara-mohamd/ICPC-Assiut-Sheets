#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size, q, l = 0, h = 0, val;
  cin >> size >> q;
  int arr[size + 1] = {0};
  long long prefix[size + 2] = {0};
  for (int i = 1; i <= size; i++)
    cin >> arr[i];

  while (q--)
  {
    cin >> l >> h >> val;
    prefix[l] += val;
    prefix[h + 1] -= val;
  }

  // cout << "prefix: ";
  for (int i = 1; i <= size; i++)
  {
    prefix[i] += prefix[i - 1];
    // cout << prefix[i] << " ";
  }
  // cout << "\n";
  for (int i = 1; i <= size; i++)
  {
    cout << arr[i] + prefix[i] << ' ';
  }
  // prefix[i] = arr[i] + prefix[i - 1];
}