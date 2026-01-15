#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>p;
    for(char c:s){
        if(c!='+'){
            p.push_back(c-'0');
        }
    }
    sort(p.begin(), p.end());
    for(int i=0;i<p.size();i++){
        if(i==p.size()-1){
            cout<<p[i];
        }
        else
        cout<<p[i]<<'+'<<"";
    }

     return 0;
}