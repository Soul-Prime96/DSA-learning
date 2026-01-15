#include<iostream>
#include<vector>
using namespace std;
int year(int &pre){
    int out=0, temp=pre;
    vector<int>v;
    while(temp>0){
        int d=temp%10;
        v.push_back(d);
        temp/=10;
    }
    for(int i=0; i<v.size();i++){
        for(int j=0; j<i;j++){
            if(v[i]==v[j]){
                out++;
                pre++;
                break;
            }
        }
    }
    if(out==0){
        return pre;
    }
    else return year(pre);

}
int main()
{
    int y;
    cin>>y;
    ++y;
    cout<<year(y);

     return 0;
}