#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,counter=0;
    cin>>n>>s;
    for(int i=0;i<=s.length()-2;i++){
        if(s[i]==s[i+1]) counter++;
    }
    cout<<counter;

     return 0;
}