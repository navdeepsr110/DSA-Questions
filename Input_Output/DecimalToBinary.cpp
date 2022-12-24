#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans=0,c=1;
    for(;num!=0;num=num/2){
        int rem=num%2;
        ans = ans + rem*c;
        c=c*10;
    }
    cout<<ans<<endl;
}