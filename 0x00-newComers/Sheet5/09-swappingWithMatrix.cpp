#include <iostream>
using namespace std;

void solve(int arr[500][500], int s, int f1, int f2)
{
  int temp = 0;
  for (int j = 0; j < s; j++)
  {
    temp = arr[f1 - 1][j];
    arr[f1 - 1][j] = arr[f2 - 1][j];
    arr[f2 - 1][j] = temp;
  }

  for (int j = 0; j < s; j++)
  {
    temp = arr[j][f1 - 1];
    arr[j][f1 - 1] = arr[j][f2 - 1];
    arr[j][f2 - 1] = temp;
  }

  for (int i = 0; i < s; i++)
  {
    for (int j = 0; j < s; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }
}
int main()
{
  int size, n1, n2;
  cin >> size >> n1 >> n2;
  int arr[500][500];
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
      cin >> arr[i][j];
  }

  solve(arr, size, n1, n2);
}