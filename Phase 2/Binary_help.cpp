// this question is not from codeforces.
// You are given an integer n.
// Find the smallest integer x such that x * x >= n.
// Examples:
// n = 1 → 1
// n = 4 → 2
// n = 8 → 3
// n = 10 → 4
// No floating points. No sqrt(). No cheating.
// Rules (read carefully, yes this matters)
// Use binary search
// Search space: 1 to n
// Stop when you’re sure it’s the smallest valid x
#include<iostream>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    int low=1,high=n,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid>=n){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;
     return 0;
}


// this approach is better because it uses O(log n) time complexity.