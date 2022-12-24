#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    for(int num=2;num<n;num++){
        for(i=2;i<=num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
           cout<<num<<endl;
        }
    }
}