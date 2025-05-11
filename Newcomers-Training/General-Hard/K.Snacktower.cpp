#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  priority_queue<int> pq;

  cin >> n;
  int freq[n + 1] = {0};
  int temp = n, x;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    freq[x] = 1;
    pq.push(x);
    if (!freq[temp])
    {
      cout << "-\n";
    }
    else
    {

      while (!pq.empty() && freq[temp])
      {
        temp--;
        cout << pq.top() << ' ';
        pq.pop();
      }
      if (temp > 1)
        cout << endl;
    }
  }
}