#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int test_cases;
  cin >> test_cases;

  vector<int> v(test_cases);
  for (int i = 0; i < test_cases; i++)
    cin >> v[i];

  for (int i = 0; i < test_cases; i++)
  {
    int temp = v[i];
    if (temp == 0)
    {
      cout << "0" << endl;
      continue;
    }
    int digits = log10(temp) + 1; // Calculate the number of digits

    while (digits)
    {
      cout << temp % 10 << " "; // Print the last digit
      temp /= 10;               // Remove the last digit
      digits--;
    }
    cout << endl;
  }

  return 0;
}