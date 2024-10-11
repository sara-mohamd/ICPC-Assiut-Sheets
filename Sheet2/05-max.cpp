#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

  int nNumbers;
  cin >> nNumbers;
  vector<int> v(nNumbers);
  for (int i = 0; i < v.size(); i++)
    cin >> v[i];

  if (v.empty())
    cout << "Nothing";
  else
    cout << *max_element(v.begin(), v.end());

  return 0;
}