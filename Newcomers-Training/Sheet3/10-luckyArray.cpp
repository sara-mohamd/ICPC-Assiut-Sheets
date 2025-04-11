#include <iostream>
#include <climits>
#include <vector>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

int main()
{
  // input => (size, array)
  // create Freq array, save least minimum odd number
  // check if small number is luky
  // print Lucky/Unlucky

  int size;
  cin >> size;
  // 2 < size < 1000
  int arr[size], freq[1001] = {0};
  // vector<int> freq;
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
    cin >> arr[i];

  for (int i = 0; i < size; i++)
  {
    freq[arr[i]]++;
    if (arr[i] % 2 != 0 && arr[i] < min)
      min = arr[i];
  }
  if (freq[min] % 2 != 0)
    cout << "Lucky";
  else
    cout << "Unlucky";
  return 0;
}