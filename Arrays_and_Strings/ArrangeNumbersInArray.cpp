#include<bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n){
    int left=0;
    int right=n-1;
    int counter=1;
    while(left<=right){
      if(counter%2==1){
        arr[left]=counter;
        counter++;
        left++;
      }
      else{
        arr[right]=counter;
        counter++;
        right--;
      }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    // for(int i=0;i<n;i++){
    //   cin>>arr[i];
    
    arrange(arr,n);
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}