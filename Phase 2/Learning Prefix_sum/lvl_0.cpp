// Given an array a of size n and q queries [l, r], print the sum of elements from l to r (1-indexed) and (0-indexed).



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n+1];
    int pref[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
    }
    while(q>0){
        int l,r,ans;
        cin>>l>>r;
        ans=pref[r]-pref[l-1];
        cout<<ans<<"\n";
        q--;
    }
     return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    int pref[n+1]={0};  
    for(int i=0;i<n;i++){
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];  
    }
    while(q>0){
        int l,r,ans;
        cin>>r>>l;
        ans=pref[r+1]-pref[l];  
        cout<<ans<<"\n";
        q--;
    }
    return 0;
}