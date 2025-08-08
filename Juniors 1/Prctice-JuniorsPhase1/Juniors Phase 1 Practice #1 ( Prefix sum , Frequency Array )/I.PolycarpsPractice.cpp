#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, sum = 0, x;
  cin >> n >> k;
  vector<int> v1(n, 0);
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }
  if (k == 1)
  {
    cout << *max_element(v1.begin(), v1.end()) << endl;
    cout << n << endl;
    return 0;
  }
  vector<int> v2 = v1;

  sort(v2.begin(), v2.end(), greater<int>());

  for (int i = 0; i < k; i++)
  {
    sum += v2[i];
    for (int j = 0; j < n; j++)
    {
      // 5 4 2 6 5 1 9 2
      if (v2[i] == v1[j])
      {
        ans.push_back(j + 1);
        // [9, ]
        // [7, 4, 1]
        v1[j] = -1;
        break;
      }
    }
  }
  cout << sum << endl;
  sort(ans.begin(), ans.end());
  // [1, 4, 7]
  sum = ans[0], x = ans[0];
  // int i = 1, i < 3; i++
  for (int i = 1; i < ans.size() - 1; i++)
  {
    // sum = 1
    // 4 -= 1 = 3
    // 4 + 1 = 5
    // 5 || 4 2 6 || 5 1 9 2
    ans[i] -= sum;
    sum += ans[i];
    // x += ans[i];
  }
  ans[k - 1] = n - sum;
  for (int i : ans)
    cout << i << ' ';
  cout << endl;
}