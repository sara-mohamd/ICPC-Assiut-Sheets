#include <iostream>
using namespace std;

void solve(int num, int arr[])
{
  int freq[20001];
  int ctr = 0;
  for (int i = 0; i < num; i++)
    if (freq[arr[i] + 1000] == 0)
    {
      freq[arr[i] + 1000]++;
      ctr++;
    }
  cout << ctr;
}
int main()
{
  int num;
  cin >> num;
  int arr[num];
  for (int i = 0; i < num; i++)
    cin >> arr[i];

  solve(num, arr);
}