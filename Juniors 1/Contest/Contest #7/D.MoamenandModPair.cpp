#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;
    vector<long long> freq(X, 0);

    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        freq[num % X]++;
    }

    long long ans = 0;
    for (int r = 0; r < X; r++) {
        int complement = (X - r) % X;
        ans += freq[r] * freq[complement];
    }
    // Handle Corner Cases: remove self-pair cases (i==j)
    ans -= freq[0]; 
    if (X % 2 == 0) ans -= freq[X/2];

    cout << ans << "\n"; 
    return 0;
}
