#include <iostream>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

int main()
{
  int size;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
    if (arr[i] <= 10)
      cout << "A[" << i << "] = " << arr[i] << endl;
  }
  return 0;
}