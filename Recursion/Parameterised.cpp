#include<iostream>
using namespace std;

void f(int n, int sum){
    if(n<1){
     cout<<sum<<endl;
     return;
    }
    f(n-1,sum+n);
}

int main(){
    int n=5;
    int sum=0;
    f(n,sum);
}