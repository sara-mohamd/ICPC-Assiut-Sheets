#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void solve(double arr[], int ln)
{
  double sum = 0;
  for (int i = 0; i < ln; i++)
    sum += arr[i];
  double avg = sum / ln;
  cout << fixed << setprecision(7) << avg;
}
int main()
{
  int ln;
  cin >> ln;

  double arr[ln];
  for (int i = 0; i < ln; i++)
  {
    cin >> arr[i];
  }
  solve(arr, ln);
}