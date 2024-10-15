#include <iostream>
#include <string>

using namespace std;
int main()
{
  int num;
  cin >> num;
  if (!num)
    cout << num << endl
         << "NO";
  else
  {
    int temp = num;
    string rev_num = "";
    int digit = 0;

    while (temp)
    {
      rev_num += to_string(temp % 10);
      temp /= 10;
    }

    if (stoi(rev_num) == num)
      cout << rev_num << endl
           << "YES";
    else
      cout << stoi(rev_num) << endl
           << "NO";
  }
}