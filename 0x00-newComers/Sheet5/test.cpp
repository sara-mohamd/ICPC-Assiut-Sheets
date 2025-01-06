#include <iostream>
using namespace std;
void solve(int arr[][s], int r, int c)
{
  for (int i = 0; i < s; i++)
  {
    cout << arr[i][s - i - 1];
  }
}
int main()
{
  int size;
  cin >> size;
  int arr[size][size];

  int row, col;
  cin >> row >> col;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
      cin >> arr[i][j];
  }
  solve(arr, row, col);
  // for (int i = 0; i < size; i++)
  // {
  //   for (int j = 0; j < size; j++)
  //     cout << arr[i][j] << " ";
  //   cout << endl;
  // }
}

void test(int arr[][3])
{
  cout << arr[0][0];
}