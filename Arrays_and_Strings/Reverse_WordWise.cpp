#include<bits/stdc++.h>
using namespace std;

void ReverseWordWise(char input[]){
    int len=strlen(input);
    int n=len-1;
    for(int i=0;i<=n;i++){
        // swap(input[i],input[len-i-1]);
        int temp=input[i];
        input[i]=input[n];
        input[n]=temp;
        n--;
    }
    cout<<input<<endl;
}

int main(){
    int n=20;
    char input[n];
    gets(input);
    ReverseWordWise(input);
    
    return 0;
}