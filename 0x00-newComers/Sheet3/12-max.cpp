#include <iostream>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;
  while (testCases)
  {
    int max, size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
      cin >> arr[i];

    int max_size = (size * (size + 1)) / 2;
    while (max_size)
    {

      max_size--;
    }

    cout << endl;
    testCases--;
  }
}