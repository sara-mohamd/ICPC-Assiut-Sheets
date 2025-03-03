#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size, m, item;
  cin >> size >> m;

  int freq[2 * m] = {0};
  for (int i = 0; i < size; i++)
  {
    cin >> item;
    freq[item + m]++;
    //
  }
  for (int i = 0; i < m * 2; i++)
  {
    // cout << freq[i] << endl;
    if (freq[i] == 0)
    {
      cout << i - m;
      break;
    }
  }
}