#include<iostream>
using namespace std;
int main()
{
    int l=0,r,ans=0,sum=0;
    int n,time;
    cin>>n>>time;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(r=0;r<n;r++){
        sum+=a[r];
        while(sum>time){
            sum-=a[l];
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
     return 0;
}

