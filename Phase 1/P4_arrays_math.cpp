#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,h,ans=0;
    cin>>n>>h;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    for(int i=0; i<n;i++){
        if(v[i]>h){
            ans+=2;
        }
        else ans++;
    }
    cout<<ans;
     
     return 0;
}



// another way of doing same thing
// int x;
// for(int i = 0; i < n; i++){
//     cin >> x;
//     ans += (x > h) ? 2 : 1;
// }
// here above two loops are used together to solve the problem it saves the memory.