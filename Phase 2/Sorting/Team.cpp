#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
     cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;){
     if(i+1<n && a[i+1]-a[i]<=k){
          c++;
          i+=2;
     }
     else{
          i++;
     }
    }
    cout<<c;
     return 0;
}