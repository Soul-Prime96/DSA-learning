// 🔥 Problem: Split Array Largest Sum
// You are given an array of positive integers.
// You must split it into k continuous subarrays.
// Goal:
// 👉 Minimize the maximum subarray sum.

// Example
// nums = [7,2,5,10,8]
// k = 2
// Possible splits:
// [7,2,5] and [10,8]
// Sums = 14 and 18
// Maximum = 18
// [7,2] and [5,10,8]
// Sums = 9 and 23
// Maximum = 23
// [7] and [2,5,10,8]
// Sums = 7 and 25
// Maximum = 25
// Minimum possible maximum = 18
// Answer = 18.



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int low = *max_element(array.begin(), array.end());
    int high = accumulate(array.begin(), array.end(), 0);
    int ans = 0;
    while (low <= high)
    { 
        int mid = low + (high - low) / 2;
        int subarrayneeded = 1;
        int sumneeded = 0;

        for (int i = 0; i < n; i++)
        {
            if (sumneeded + array[i] > mid)
            {
                subarrayneeded++;
                sumneeded = 0;
            }
            sumneeded += array[i];
        }
        if (subarrayneeded <= k)
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