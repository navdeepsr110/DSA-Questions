// #include<iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     cout<<"Hello World";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // cout<<"*";
//     int n=5;
//     for(int i=0;i<n;i++){
//        for(int j=0;j<=n;j++){
//         if(j<=n-i){
//             cout<<" ";
//         }
//         else{
//             cout<<"*";
//         }
//        }
//        cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void printF(int index, vector<int> &ds, int arr[], int n){
    if(index==n){
       for(auto it : ds){
        cout<<it<<" ";
       }
       cout<<endl;
       return;
    }
    
    ds.push_back(arr[index]);
    printF(index+1,ds,arr,n);
    ds.pop_back();
    printF(index+1,ds,arr,n);
}

int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printF(0, ds, arr, n);
    return 0;
}