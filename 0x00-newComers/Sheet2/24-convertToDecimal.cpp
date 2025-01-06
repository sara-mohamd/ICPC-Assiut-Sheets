#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
  int testCases;
  cin >> testCases;

  vector<int> v(testCases);

  for (int i = 0; i < v.size(); i++)
    cin >> v[i];

  for (int k = 0; k < v.size(); k++)
  {
    int temp = v[k];
    int bn = 0, counter = 0, convert = 0;
    while (temp)
    {
      if (temp % 2 != 0)
      {
        bn = (bn * 10) + 1;
        counter++;
      }
      temp /= 2;
    }

    for (int i = 0; i < counter; i++)
    {
      convert += pow(2, i);
    }
    cout << convert << endl;
  }
}