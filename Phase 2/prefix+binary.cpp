// You are given:
// an array of positive integers
// an integer s
// Task:
// Find the minimum length of a subarray whose sum ≥ s
// If no such subarray exists, print 0.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int target = pref[i] + s;
        int j = lower_bound(pref.begin(), pref.end(), target) - pref.begin();

        if (j <= n) {
            ans = min(ans, j - i);
        }
    }

    if (ans == INT_MAX) cout << 0;
    else cout << ans;
}
