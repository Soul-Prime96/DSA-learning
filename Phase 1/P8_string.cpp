#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t = "";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {   
            if (s[i] == s[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            t += s[i];
        }
    }

    if(t.length()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}



// this one is not actually scaleable


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int cpy=0;
//     for(int i=0;i<s.length();i++){
//         for(int j=0;j<i;j++){
//             if(s[i]==s[j]){
//                 cpy++;
//             }
//         }
//     }
//     if((s.length() - cpy)%2==0) cout<<"CHAT WITH HER!";
//     else cout<<"IGNORE HIM!";

//     return 0;
// }







