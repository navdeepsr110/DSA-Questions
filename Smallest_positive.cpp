#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int smallP(int arr[],int size){
  for(int i=0;i<size;i++){
    if(arr[i]>0 && arr[i]<=size){
      swap(arr[i],arr[arr[i-1]]);
    }
  for(int i=0;i<size;i++){
    if(arr[i]!=(i+1))
    return i+1;
    break;
  }
  }
  /* set<int> s;
  for(int i=0;i<size;i++){
    if(arr[i]>=1){
      s.insert(arr[i]);
    }
  }
  
  int k = 1;
  for(int i:s){
    if(i!=k){
      return k;
    }
    k++;
  }
  */
}


int main()
{
    int arr[100];
    int size;
    cin >> size;
    for(int i =0;i<size;i++){
      cin >> arr[i];
    }
    
    cout<< smallP(arr,size);
}
