// 📦 Problem: Minimum Capacity to Ship Packages Within D Days
// You are given an array:
// weights = [1,2,3,4,5,6,7,8,9,10]
// You must ship them in order (no rearranging).
// You have D days.
// Each day you can ship a total weight ≤ capacity.
// Question:
// 👉 What is the minimum ship capacity so that all packages are shipped within D days?

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, days;
    cin >> n >> days;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int daysNeeded = 1;
        int currentLoad = 0;

        for (int i = 0; i < n; i++)
        {
            if (currentLoad + weights[i] > mid)
            {
                daysNeeded++;
                currentLoad = 0;
            }
            currentLoad += weights[i];
        }
        if (daysNeeded <= days)
        {
            ans = mid;
            high=mid-1;
        }
        else
            low = mid + 1;
    }
    cout << ans;
    return 0;
}