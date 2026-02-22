// Given an array a of size n and q queries [l, r], print the sum of elements from l to r (1-indexed).
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int pref[n+1]={0};
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        pref[i+1]=pref[i]+v[i];
    }
    while(q--){
        int l,r,ans;
        cin>>l>>r;
        ans=pref[r]-pref[l-1];
        cout<<ans<<endl;
    }

     return 0;
}