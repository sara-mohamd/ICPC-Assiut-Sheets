#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int arr[5] = {0, 0, 0, 0, 0};
  for (int i = 0; i < s.length(); i++)
  {
    if (tolower(s[i]) == 'e')
      arr[0]++;
    else if (tolower(s[i]) == 'g')
      arr[1]++;
    else if (tolower(s[i]) == 'y')
      arr[2]++;
    else if (tolower(s[i]) == 'p')
      arr[3]++;
    else if (tolower(s[i]) == 't')
      arr[4]++;
  }
  // int m = *min_element(arr, arr + 5);

  cout << *min_element(arr, arr + 5);
  return 0;
}