#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    unordered_map<int, int> freq;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=0,counter=0,ans=0;
    for(r=0;r<n;r++){
        freq[a[r]]++;
        if(freq[a[r]]==1){ 
            counter++;
        }
        while(counter>k){
            freq[a[l]]--;
            if(freq[a[l]]==0){
                counter--;
            }
            l++;
        }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
     return 0;
}