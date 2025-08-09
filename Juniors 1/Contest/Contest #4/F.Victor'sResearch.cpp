#include <bits/stdc++.h>
#define int long long
using namespace std;
void fast() { ios::sync_with_stdio(false), cin.tie(nullptr); }

signed main()
{
  fast();
  int n, subarray, ans = 0;
  cin >> n >> subarray;
  vector<int> nums(n);
  for (auto &it : nums)
    cin >> it;

  map<int, int> mp;
  mp[0] += 1;
  int prefix_sum = 0;
  for (int i = 0; i < n; i++)
  {
    prefix_sum += nums[i];
    ans += mp[prefix_sum - subarray];
    mp[prefix_sum]++;
  }
  cout << ans << '\n';
}