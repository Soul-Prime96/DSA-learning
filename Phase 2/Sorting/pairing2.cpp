// Maximum Disjoint Pairs with Difference Condition
// You are given an array of n integers and an integer k.
// Find the maximum number of pairs (i, j) such that:
// a[j] - a[i] ≥ k
// Each element can be used at most once.

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,c=0;
     cin>>n>>k;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a.begin(),a.end());
     int j=n/2;
     int i=0;
     while(i<n/2 && j<n){
          if(a[j]-a[i]>=k){
               c++;
               i++;
               j++;
          }
          else{
               j++;
          }
     }
     cout<<c;
     return 0;
}