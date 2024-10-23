#include <iostream>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

void swap(int *, int *);
int main()
{
  int size;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
    cin >> arr[i];

  int index;
  for (int i = 0; i < size; i++)
  {
    index = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[index] > arr[j])
        index = j;
    }
    swap(&arr[i], &arr[index]);
  }

  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}