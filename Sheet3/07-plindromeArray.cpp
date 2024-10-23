// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int size;
  cin >> size;
  vector<int> v(size), rev_(size);

  for (int i = 0; i < size; i++)
    cin >> v[i];
  for (int i = 0; i < size; i++)
    rev_[i] = v[size - 1 - i];

  if (v == rev_)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}