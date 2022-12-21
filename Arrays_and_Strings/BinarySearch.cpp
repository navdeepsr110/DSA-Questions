#include<iostream>
using namespace std;

int binarySearch(int input[],int n, int val){
    int start=0;
    int end=n-1;
    for(int i=0;i<n/2;i++){
        int mid = (start+end)/2;
        if(input[mid]==val){
           return mid;
        }
        else if(input[mid]<val){
           start=mid+1;  
        }
        else{
            end=mid-1;
        }
    }
  return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    int val;
    cin>>val;
  cout<<binarySearch(arr,n,val);
}