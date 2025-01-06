#include <iostream>
using namespace std;

void swap(int *, int *);
int main()
{
  int size;
  cin >> size;

  int arr[size];
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  int min = arr[0], max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
      max = i; // sava the index
    if (arr[i] < min)
      min = i; // sava the index
  }
  swap(arr[min], arr[max]);
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}