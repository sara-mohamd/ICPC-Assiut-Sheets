#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k, freq[26] = {0};
  string s;
  cin >> n >> k >> s;

  for (char c : s)
    freq[c - 'a']++;

  for (char i = 'a'; i < 'z'; i++)
  {
    if (k >= freq[i - 'a'])
      k -= freq[i - 'a'];
  }
}