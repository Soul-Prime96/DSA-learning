#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0;
    int sum=0,len=INT_MAX;
    for(r=0;r<n;r++){
        sum+=a[r];
        while(sum>=k){
            len=min(len,r-l+1);
            sum-=a[l];
            l++;
        }
    }
    if(len==INT_MAX){
        cout<<0;
    }
    else{
        cout<<len;
    }
     return 0;
}