// Maximum Disjoint Pairs with Sum Condition
// You are given an array of n integers and an integer k.
// Find the maximum number of pairs (i, j) such that:
// a[i] + a[j] ≥ k
// Each element can be used at most once.

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
        if(a[i] + a[j] >= k){
            c++;
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    cout<<c;
     return 0;
}