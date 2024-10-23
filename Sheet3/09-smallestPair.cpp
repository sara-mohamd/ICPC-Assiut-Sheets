#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

/**
 * Find according to this (A[i]+A[j]+(j−i)) expression the lowest Pair.
 * Systematically evaluate different pairs (i, j) in the array
 * Evaluate all possible combinations of (i, j).
 * Handling constraints
 * Return:
 */

int main()
{
  // (testCases > 1) means this program gonna run again with new case to handle.
  int testCases;
  cin >> testCases;

  while (testCases)
  {
    int size;
    cin >> size;
    int arr[size];
    vector<int> v;
    for (int i = 0; i < size; i++)
      cin >> arr[i];

    for (int i = 0; i < size; i++)
    {
      int result;
      for (int j = 1 + i; j < size; j++)
      {
        result = arr[i] + arr[j] + (j - i);
        v.push_back(result);
        result = 0;
      }
    }
    cout << *(min_element(v.begin(), v.end())) << endl;
    testCases--;
  }
}