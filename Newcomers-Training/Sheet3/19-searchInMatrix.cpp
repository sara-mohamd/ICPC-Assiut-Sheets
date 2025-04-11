#include <iostream>
using namespace std;
int main()
{
  int r, c, key;
  cin >> r >> c;

  int arr[r][c];
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
      cin >> arr[i][j];
  }
  cin >> key;
  bool flag = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (arr[i][j] == key)
        flag = 1;
    }
  }
  if (flag)
    cout << "will not take number";
  else
    cout << "will take number";
  return 0;
}