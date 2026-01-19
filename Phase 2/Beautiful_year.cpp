
#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>>year;
    while(true){
        year++;
        int fre[10]={0};
        int d=year;
        while(d>0){
            fre[d%10]++;
            d/=10;
        }
        int counter=0;
        for(int i=0;i<10;i++){
            if(fre[i]>1){
                counter++;
                break;
            }
        }
        if(counter==0){
            cout<<year;
            return 0;
        }
    }
}