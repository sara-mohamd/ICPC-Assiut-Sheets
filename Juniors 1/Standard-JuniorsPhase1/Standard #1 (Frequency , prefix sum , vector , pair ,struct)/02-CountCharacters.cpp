// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  cin >> s;
  // arr1 -> Capital letters.
  // arr2 -> small letters.
  int arr1[26] = {0}, arr2[26] = {0};
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
      arr1[s[i] - 65]++;

    else if (s[i] >= 'a' && s[i] <= 'z')
      arr2[s[i] - 97]++;
  }
  for (int i = 0; i < 26; i++)
    if (arr1[i] != 0)
      cout << char(i + 65) << " " << arr1[i] << endl;

  for (int i = 0; i < 26; i++)
    if (arr2[i] != 0)
      cout << char(i + 97) << " " << arr2[i] << endl;
  return 0;
}