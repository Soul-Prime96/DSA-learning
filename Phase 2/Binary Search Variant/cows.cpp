// You have n stalls and k cows.
// Place cows in stalls such that the minimum distance between any two cows is maximized.
// example-Stalls:

// [1, 3, 6, 10, 15]
// k = 3
// Start at 1.
// Next ≥ 6 → 6
// Next ≥ 11 → 15
// That works.
// Distances:
// 6 - 1 = 5
// 15 - 6 = 9
// Minimum = 5
// So 5 works.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>stalls(n);
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    sort(stalls.begin(), stalls.end());
    int low=0,high=stalls[n-1]-stalls[0];
    int ans=0;
    while(low<=high){
        int mid= low+(high-low)/2;
        int cows=1;
        int lastpos=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-lastpos>=mid){
                cows++;
                lastpos=stalls[i];
            }
        }
        if(cows>=k){
            low=mid+1;
            ans=mid;
        }
        else if(cows<k){
            high=mid-1;
        }
    }
    cout<<ans;
     return 0;
}


