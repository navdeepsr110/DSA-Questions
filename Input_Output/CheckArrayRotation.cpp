#include<iostream>
using namespace std;

int arrayRotationCheck(int arr[], int n){
    int num=0;
    for(int i=0;i<n;i++){
        if(num<arr[i]){
            num=arr[i];
        }
        else{
            return i;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arrayRotationCheck(arr,n);
}