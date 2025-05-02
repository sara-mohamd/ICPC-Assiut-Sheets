#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row, col, ctr = 0;
  cin >> row >> col;
  vector<int> v(col + 1, 0);
  char arr[row + 2][col + 2], s;
  for (int i = 0; i <= row; i++)
  {
    for (int j = 0; j <= col; j++)
      arr[i][j] = '0';
  }

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= col; j++)
    {
      cin >> arr[i][j];
      if ((arr[i][j] - '0') > v[j])
        v[j] = arr[i][j] - '0';
    }
  }

  for (int i = 1; i <= col; i++)
  {
    for (int j = 1; j <= row; j++)
    {
      if ((arr[j][i] - '0') == v[i])
        arr[j][0] = '1';
    }
  }
  for (int i = 1; i <= row; i++)
  {
    if (arr[i][0] == '1')
      ctr++;
  }
  cout << ctr << endl;
}