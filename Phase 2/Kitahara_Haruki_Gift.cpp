// #include<iostream>
// using namespace std;
// int main()
// {
//      int n;
//      cin>>n;
//      int sum=0;
//      int a[n];
//      for(int i=0;i<n;i++){
//         cin>>a[i];
//         sum+=a[i];
//      }
//      if(n==1){
//         cout<<"No";
//      }
//      else{
//         if(sum%200==0){
//             cout<<"Yes";
//         }
//         else cout<<"No";
//      }
//      return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, cnt100 = 0, cnt200 = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 100) cnt100++;
        else cnt200++;
    }

    if (cnt100 == 0) {
        if (cnt200 % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    } else {
        if (cnt100 % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}



// this is question is something with which i dont want to deal with at any level
