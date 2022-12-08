#include<iostream>
#include<vector>
using namespace std;
void Print(int index, int arr[], vector<int> ds, int sum, int s, int n){
     if(index==n){
        if(s==sum){
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<endl;
        }
        return;
     }
     //Pick Condition
     ds.push_back(arr[index]);
     s+=arr[index];

     Print(index+1,arr,ds,sum,s,n);
     s-=arr[index];

   ds.pop_back();

   //Not pick condition
   Print(index+1,arr,ds,sum,s,n);
}
int main(){
    int n=3;
    int arr[]={1,2,1};
    vector<int>v;
    int sum=2;
    
    Print(0,arr,v,sum,0,n);
}