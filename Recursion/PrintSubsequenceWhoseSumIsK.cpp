//This will print only once the numbers
#include<iostream>
#include<vector>
using namespace std;


bool Print(int index, int arr[], vector<int> ds, int sum, int s, int n){
     if(index==n){
      //condition satisfied
        if(s==sum){
        for(auto it: ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return true;
        }
        //condition not satisfied
       else return false;
     }
     //Pick Condition
     ds.push_back(arr[index]);
     s+=arr[index];

     if(Print(index+1,arr,ds,sum,s,n)==true){
        return true;
     }

     s-=arr[index];
     ds.pop_back();

   //Not pick condition
   if(Print(index+1,arr,ds,sum,s,n)==true){
    return true;
   }

   return false;
}
int main(){
    int n=3;
    int arr[]={1,2,1};
    vector<int>v;
    int sum=2;
    
    Print(0,arr,v,sum,0,n);
}