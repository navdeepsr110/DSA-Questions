#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int decimal=0;
    for(;n>0;n=n/10){
        int temp=n%10;
        if(temp==1){
        decimal += temp*pow(2,i);
        }
        i++;
    }
    cout<<decimal<<endl;
    }
