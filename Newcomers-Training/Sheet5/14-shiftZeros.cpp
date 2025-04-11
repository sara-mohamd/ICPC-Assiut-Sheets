#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
  int len = size - 1;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0 && len > i)
    {
      for (int j = i; j < size - 1; j++)
        arr[j] = arr[j + 1];
      arr[size - 1] = 0;
      len--;
      i--;
    }
  }
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

int main()
{
  int size;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
    cin >> arr[i];

  solve(arr, size);
}