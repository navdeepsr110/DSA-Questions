#include<iostream>
using namespace std;

int duplicateNumber(int arr[], int size){
   for(int i=0;i<size;i++){
    int count=0;
    for(int j=0;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count==2){
        return arr[i];
    }
   }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<duplicateNumber(arr,n);
}