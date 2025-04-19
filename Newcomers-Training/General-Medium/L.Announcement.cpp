#include <bits/stdc++.h>
using namespace std;
int freq[100008] = {0};
int main()
{
  int n, ok = 1, ctr = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    freq[arr[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (freq[arr[i]] > 1)
    {
      ok = 0;
      ctr += (freq[arr[i]] - 1);
      freq[arr[i]] = 1;
    }
  }
  if (ok)
    cout << "-1\n";
  else
    cout << ctr << endl;
}