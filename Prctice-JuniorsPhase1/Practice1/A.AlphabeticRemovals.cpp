#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  char c;
  int freq1[26] = {0}, freq2[26] = {0}, a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> c;
    a[i] = c - 'a';
    freq1[a[i]]++;
    freq2[a[i]]++;
  }
  for (int i = 0; i < 26 && k > 0; i++)
  {
    if (freq1[i] == 0)
      continue;
    if (k > freq1[i])
    {
      k -= freq1[i];
      freq1[i] = 0;
    }
    else
    {
      freq1[i] -= k;
      k = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (freq1[a[i]] == freq2[a[i]])
    {
      cout << char(a[i] + 'a');
    }
    else
    {
      freq2[a[i]]--;
    }
  }
}