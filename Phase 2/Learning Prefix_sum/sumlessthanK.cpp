#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
     cin>>n,k;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int l=0,r=0;
     int sum,c=0;
     for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>k){
            sum-=a[l];
            l++;
        }
        c=c+(r-l+1);
     }
     cout<<c;
     return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      int n,k;
//      cin>>n>>k;
//      vector<int>a(n);
//      for(int i=0; i<n; i++){
//         cin>>a[i];
//      }
//      int l=0,r=0;
//      int sum=0,cou=0;
//      for(r=0;r<n;r++){
//         sum+=a[r];
//         while(sum>k){
//             sum-=a[l];
//             l++;
//         }
//         if(sum==k){
//             cou++;
//         }
//      }
//      cout<<cou;
//      return 0;
// }