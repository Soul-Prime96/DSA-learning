#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(min(n,m)%2==0) cout<<"Malvika";
    else cout<<"Akshat";
     return 0;
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,m,c=0;
//     cin>>n>>m;
//     while(true){
//         if(n+m>=2){
//             c++;
//             n--;
//             m--;
//         }
//         if(n+m<2){
//             if(c%2==0){
//                 cout<<"Malvika";
//                 return 0;
//             }
//             else{
//                 cout<<"Akshat";
//                 return 0;
//             }
//         }
//     }
//      return 0;
// }