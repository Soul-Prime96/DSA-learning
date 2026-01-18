#include<iostream>
using namespace std;
int main()
{
    int t,w,h,n,pieces;
    cin>>t;
    while(t--){
        cin>>w>>h>>n;
        pieces=1;
        while(w%2==0){
            w/=2;
            pieces*=2;  
        }
        while(h%2==0){
            h/=2;
            pieces*=2;    
        }
        if(pieces>=n) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";    
    }
     return 0;
}