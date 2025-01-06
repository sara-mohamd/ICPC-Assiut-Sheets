#include <iostream>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

int main()
{
  int size, X;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  cin >> X;

  for (int i = 0; i < size; i++)
  {
    if (X == arr[i])
    {
      cout << i;
      return 0;
    }
  }
  cout << -1;
  return 0;
}