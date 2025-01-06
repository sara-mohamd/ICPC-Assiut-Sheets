#include <iostream>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

int main()
{
  int size;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
    cin >> arr[i];

  for (int i = 0; i < size; i++)
  {
    if (!arr[i])
      continue;
    else if (arr[i] > 0)
      arr[i] = 1;
    else
      arr[i] = 2;
  }

  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  return 0;
}