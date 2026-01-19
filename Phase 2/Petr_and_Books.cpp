#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[7]={0};
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    while(true){
        for(int i=0; i<7;i++){
            sum+=a[i];
            if(sum>=n){
                cout<<i+1<<"\n";
                return 0;
            }
            
        }
    }
}