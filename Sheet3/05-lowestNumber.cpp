#include <iostream>
#include <climits>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

int main()
{
  // p[0] = position
  // p[1] = value
  int size, position[2] = {0, INT_MAX};
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
    if (position[1] > arr[i] && position[1] != arr[i])
    {
      position[0] = i + 1;
      position[1] = arr[i];
    }
  }
  cout << position[1] << " " << position[0];
  return 0;
}