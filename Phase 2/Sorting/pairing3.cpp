// Count All Valid Pairs with Sum Constraint
// You are given an array of n integers and an integer k.
// Count the total number of pairs (i, j) such that:
// i < j
// a[i] + a[j] ≤ k
// Elements can be reused across different pairs.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int i=0,j=n-1,c=0;
    while(i<j){
        if(a[i] + a[j] <= k){
            c+=j-i;
            i++;
        }
        else j--;
    }
    cout<<c;
         return 0;
}