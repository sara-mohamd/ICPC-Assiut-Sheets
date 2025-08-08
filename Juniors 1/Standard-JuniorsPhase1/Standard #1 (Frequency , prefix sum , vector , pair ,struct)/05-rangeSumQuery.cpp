#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size, q, l = 0, h = 0;
  cin >> size >> q;
  int arr[size + 1] = {0};
  long long prefix[size + 1] = {0};
  for (int i = 1; i <= size; i++)
  {
    cin >> arr[i];
    prefix[i] = arr[i] + prefix[i - 1];
  }

  while (q--)
  {
    cin >> l >> h;
    cout << prefix[h] - prefix[l - 1] << endl;
  }
}