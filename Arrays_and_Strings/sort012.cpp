#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n){
    int cnt0=0,cnt1=0,cnt2=0;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
        cnt0++;
    }
    else if(arr[i]==1){
        cnt1++;
    }
    else{
        cnt2++;
    }
  }
//   cout<<cnt0<<" "<<cnt1<<" "<<cnt2<<endl;
 int j=0;
 for(int i=0;i<cnt0;i++){
    arr[j]=0;
    j++;
 }
 for(int i=0;i<cnt1;i++){
    arr[j]=1;
    j++;
 }
 for(int i=0;i<cnt2;i++){
    arr[j]=2;
    j++;
 }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}