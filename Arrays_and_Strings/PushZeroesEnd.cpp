#include<iostream>
using namespace std;

void pushzeroesEnd(int* input, int size){
    int count=0, temp[size], check=0;
    for(int i=0;i<size;i++){
        if(input[i]!=0){
            temp[check]=input[i];
            count++;
            check++;
        }
    }
    for(int i=size;i>=count;i--){
        input[i]=0;
    }
    for(int j=0;j<size;j++){
        
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pushzeroesEnd(arr,n);
}