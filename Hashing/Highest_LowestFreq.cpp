#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int mincount=INT_MAX;
    for(int i=0;i<n;i++){
      
    }

    int mxcount=INT_MIN;
    //  for(auto it:mpp)
    // {
    //     // cout<<it.first<<"->"<<it.second<<endl;
    //     maxi=max(maxi,it.second);
    //     mini=min(mini,it.second);
    // }
    int res;
     for(auto x:mpp){
      if(x.second>mxcount){
         res= x.first;
         mxcount=x.second;
      }
   }
   int res1;
     for(auto x:mpp){
      if(x.second<mincount){
         res1= x.first;
         mxcount=x.second;
      }
   }
    cout<<res<<" "<<res1;
    
    return 0;
}