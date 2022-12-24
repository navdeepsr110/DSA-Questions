#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int reverse=0;

    while(n){
        int lastDigit=n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }
     cout<<reverse<<endl;
}