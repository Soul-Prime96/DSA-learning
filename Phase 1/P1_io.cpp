/*Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.
Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
*/

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




 