// You’re given a sorted array of integers and a number x.
// Your task is to determine whether there exists a pair (i, j) with i < j such that:
// a[i] + a[j] == x
// Constraints are big enough that checking all pairs will get laughed out of the judge room.

#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    int i=0,j=n-1;
    for(int k=0;k<n;k++){
        cin>>a[k];
    }
    while(i<j){
        if(a[i]+a[j]>x) j--;
        if(a[i]+a[j]<x) i++;
        if(a[i]+a[j]==x){
             cout<<"("<<i<<","<<j<<")";
             return 0;
        }
    }
    cout<<"No such pair exist";
     return 0;
}