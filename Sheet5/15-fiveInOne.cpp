#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Ops
{
private:
  int size;
  int arr[100];
  int divisor_count[100] = {0};
  int pal[100] = {0};

public:
  Ops(int arr2[], int s)
  {
    size = s;
    for (int i = 0; i < s; i++)
      arr[i] = arr2[i];
  }

  void prime()
  {
    int prime_count = 0;
    for (int i = 0; i < size; i++)
    {
      bool is_prime = true;
      if (arr[i] <= 1)
        is_prime = false;
      else
      {
        for (int j = 2; j * j <= arr[i]; j++)
        {
          if (arr[i] % j == 0)
          {
            divisor_count[i]++;
            is_prime = false;
          }
        }
      }
      if (is_prime)
        prime_count++;
    }
    cout << "The number of prime numbers : " << prime_count << endl;
  }

  void Palindrome(int n, int pos)
  {
    int digit = 0;
    int temp = n;
    while (temp)
    {
      digit = (digit * 10) + (temp % 10);
      temp /= 10;
    }
    if (n == digit)
      pal[pos] = 1;
  }

  void ApplyPalindrome()
  {
    int ctr = 0;
    for (int i = 0; i < size; i++)
      Palindrome(arr[i], i);
    for (int i = 0; i < size; i++)
      if (pal[i] != 0)
        ctr++;
    cout << "The number of palindrome numbers : " << ctr << endl;
  }

  void GDC()
  {
    int index = 0;
    for (int i = 1; i < size; i++)
    {
      if (divisor_count[index] < divisor_count[i])
        index = i;
      else if (divisor_count[index] == divisor_count[i] && arr[i] > arr[index])
        index = i;
    }
    cout << "The number that has the maximum number of divisors : " << arr[index] << endl;
  }
};

void solve(int arr[], int size)
{
  Ops obj1(arr, size);
  cout << "The maximum number : " << *max_element(arr, arr + size) << endl;
  cout << "The minimum number : " << *min_element(arr, arr + size) << endl;
  obj1.prime();
  obj1.ApplyPalindrome();
  obj1.GDC();
}

int main()
{
  int s;
  cin >> s;

  int arr[100];
  for (int i = 0; i < s; i++)
    cin >> arr[i];

  solve(arr, s);
  return 0;
}
