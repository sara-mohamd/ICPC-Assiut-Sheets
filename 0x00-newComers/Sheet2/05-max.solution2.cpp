#include <iostream>
#include <vector>

using namespace std;
int main()
{

  int nNumbers;
  cin >> nNumbers;
  vector<int> v(nNumbers);
  for (int i = 0; i < v.size(); i++)
    cin >> v[i];

  int max = v[0];
  for (int i = 1; i < v.size(); i++)
  {
    if (v[i] > max)
      max = v[i];
  }

  cout << max;

  return 0;
}