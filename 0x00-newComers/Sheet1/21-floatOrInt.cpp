#include <iostream>
using namespace std;
int main()
{
  float num;
  cin >> num;

  if (int(num) == num)
  {
    cout << "int " << int(num) << endl;
  }
  else
  {
    cout << "float " << int(num) << " " << num - int(num) << endl;
  }
  return 0;
}