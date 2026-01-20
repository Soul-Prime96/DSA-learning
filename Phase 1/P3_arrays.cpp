#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int threshold=v[k-1];
    for(int i=0; i<n;i++){
        if(v[i]>=threshold && v[i]>0){
            ans++;
        }
    }
    cout<<ans<<'\n';
     
     return 0;
}