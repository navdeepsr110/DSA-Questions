#include<iostream>
using namespace std;

int main(){
    int t1=0,t2=1,fib=0;
    int n;
    cin>>n;
    cout<<t1<<" "<<t2<<" ";
    for(int i=2;i<n;i++){
       
       fib=t1+t2;
       t1=t2;
       t2=fib;
       cout<<fib<<" ";
       
    }
}