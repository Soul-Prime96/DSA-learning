#include<iostream>
using namespace std;
int main()
{
    int n,mishka_count=0,chris_count=0;
    cin>>n;
    while(n--){
        int mishka_score,chris_score;
        cin>>mishka_score>>chris_score;
        if(mishka_score>chris_score) mishka_count++;
        else if(mishka_score<chris_score) chris_count++;
    }
    if(mishka_count>chris_count) cout<<"Mishka";
    else if(mishka_count<chris_count) cout<<"Chris";
    else cout<<"Friendship is magic!^^";

     return 0;
}