#include<iostream>
using namespace std;

int UniqueNumber(int arr[], int size){
   for(int i=0;i<size;i++){
    int count=0;
    for(int j=0;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count==1){
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
    cout<<UniqueNumber(arr,n);
}