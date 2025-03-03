#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int size;
  cin >> size;
  vector<int> vec(size);

  for (int i = 0; i < size; i++)
    cin >> vec[i];

  sort(vec.begin(), vec.end());

  for (int i = 0; i < size; i++)
    cout << vec[i] << " ";

  return 0;
}