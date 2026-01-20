
// my solution

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q>0){
        string s,t="";
        cin>>s;
        int l=s.length()-2;
        string p=to_string(l);
        if(s.length()>10){
            t=t+s[0];
            t=t+p;
            t=t+s[s.length()-1];
            cout<<t;
        }
        else{
            cout<<s;
        }
        q--;
    }
     
     return 0;
}

// gpt solution

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int q;
//     cin >> q;
//     while (q--) {
//         string s;
//         cin >> s;
//         if (s.length() > 10) {
//             cout << s[0] << s.length() - 2 << s.back() << '\n';
//         } else {
//             cout << s << '\n';
//         }
//     }
//     return 0;
// }




 