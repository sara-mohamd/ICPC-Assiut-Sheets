#include <iostream>
using namespace std;

void solve(int arr[], int s, int no)
{
  int temp;
  while (no--)
  {
    temp = arr[s - 1];
    for (int i = s - 2; i >= 0; i--)
      arr[i + 1] = arr[i];
    arr[0] = temp;
  }

  for (int i = 0; i < s; i++)
    cout << arr[i] << " ";
}
int main()
{
  int size, num;
  cin >> size >> num;

  int arr[size];
  for (int i = 0; i < size; i++)
    cin >> arr[i];
  solve(arr, size, num);
}