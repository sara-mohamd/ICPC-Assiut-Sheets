#include <iostream>
using namespace std;

int main()
{
  long long n1, n2, n3, n4;
  long long result = 1;
  cin >> n1 >> n2 >> n3 >> n4;
  /*
  Since you only need the last two digits of the final product
  focusing on the last two digits at each step of the calculation.
   */
  result = (result * (n1 % 100)) % 100;
  result = (result * (n2 % 100)) % 100;
  result = (result * (n3 % 100)) % 100;
  result = (result * (n4 % 100)) % 100;

  // Output the result
  if (result < 10)
  {
    cout << "0" << result << endl; // Add leading zero if necessary
  }
  else
  {
    cout << result << endl;
  }

  return 0;
}
