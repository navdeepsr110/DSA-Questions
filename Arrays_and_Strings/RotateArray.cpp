#include<bits/stdc++.h>
using namespace std;

void rotate(int input[], int d, int n){
    int j=0,arr[n];
    for(int i=d;i<n;i++){
      arr[j++]=input[i];
    }
    for(int i=0;i<d;i++){
        arr[j++]=input[i];
    }
    for(int i=0;i<n;i++){
        input[i]=arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int d;
    cin>>d;
    rotate(input,d,n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    return 0;
}