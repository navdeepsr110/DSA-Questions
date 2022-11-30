#include<iostream>
using namespace std;

void rev_arr(int i, int n, int arr[]){
  if(i>=n/2)
  return;

  swap(arr[i],arr[n-i-1]);
  rev_arr(i+1,n,arr);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rev_arr(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}