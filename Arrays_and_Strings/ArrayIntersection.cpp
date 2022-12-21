#include<iostream>
using namespace std;

void intersection(int* input1, int* input2, int size1, int size2){
    for(int i=0;i<size1;i++){
      for(int j=0;j<size2;j++){
        if(input1[i]==input2[j]){
            cout<<input1[i]<<" ";
            input2[j]=-9999999;
            break;
        }
      }
    }
}

int main(){
    int n;
    cin>>n;
    int arr1[n], arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,n,n);
}