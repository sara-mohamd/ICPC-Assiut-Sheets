#include <iostream>
using namespace std;
bool isOdd(int n)
{
  return !(n % 2 == 0);
}
bool isPalindrome(int n)
{
  string binary = "";
  while (n)
  {
    if (n % 2 == 0)
      binary += '0';
    else
      binary += '1';
    n /= 2;
  }
  for (int i = 0; i < binary.length(); i++)
    if (binary[i] != binary[binary.length() - i - 1])
      return false;
  return true;
}
int main()
{
  int n;
  cin >> n;
  if (isOdd(n))
  {
    if (isPalindrome(n))
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}