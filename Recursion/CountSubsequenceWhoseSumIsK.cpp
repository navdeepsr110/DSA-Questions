#include<bits/stdc++.h>
using namespace std;
int CountS(int ind, int n, int arr[], int k, int s){
    if(ind==n){
        if(s==k)
        return 1;

        else
        return 0;
    }
    s+=arr[ind];
   int l = CountS( ind+1 ,  n,  arr,  k,  s);

   s-=arr[ind];
   int r =CountS( ind+1 ,  n, arr,  k,  s);

   return l+r;
}
int main(){
    int n=3;
    int arr[]={1,2,1};
    int sum=2;
    cout<<CountS(0,n,arr,sum,0);
    return 0;
}