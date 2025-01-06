#include <iostream>
#include <string>
using namespace std;
int main()
{
  string b1[2], b2[2];
  cin >> b1[0] >> b1[1];
  cin >> b2[0] >> b2[1];

  if (b1[1] == b2[1])
    cout << "ARE Brothers" << endl;
  else
    cout << "NOT" << endl;
  return 0;
}