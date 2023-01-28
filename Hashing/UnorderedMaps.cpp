#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Here Unordered map stores the elements without an order
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
         mpp[arr[i]]++;
    }

    //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<" ";
    }
    return 0;
}