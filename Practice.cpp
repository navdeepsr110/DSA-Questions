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

// #include<bits/stdc++.h>
// using namespace std;

// void printF(int index, vector<int> &ds, int arr[], int n){
//     if(index==n){
//        for(auto it : ds){
//         cout<<it<<" ";
//        }
//        cout<<endl;
//        return;
//     }
    
//     ds.push_back(arr[index]);
//     printF(index+1,ds,arr,n);
//     ds.pop_back();
//     printF(index+1,ds,arr,n);
// }

// int main(){
//     int arr[]={3,1,2};
//     int n=3;
//     vector<int> ds;
//     printF(0, ds, arr, n);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     set<int> s;
//     for(int i=0;i<n;i++){
//          s.insert(arr[i]);
//     }
//     int count=0;
//     for(auto itr:s){
//        if(count==k){
//          cout<<itr;
//          break;
//        }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int size= s.size();
 int n1=s[0]-48;
 int n2=s[1]-48;
 int num=n1*10 + n2;
  // cout<<n1<<" "<<n2<<endl;
  // cout<<num;
  if(s[size-2]=='A' && s[1]=='2' && s[0]=='1'){
    s[0]='0';
    s[1]='0';
  }
  else if((s[0]=='0' || s[1]=='1') && s[size-2]=='P'){
    num=num+12;
    int n3=num%10;
    // cout<<num<<endl;
    num=num/10;
    // int n4=num%100;
    s[0]=num + 48;
    s[1]=n3 + 48;
  }
  // else{
  //   s[0]=1;
  // }
  int start=0;
  int length=size-2;
  // string ans=s;
 string ans= s.substr(start, length);
  //  = s.substr(start, (end - start));
  // for(int i=0;i<size-3;i++){
  //   // cout<<s[i];
  //   ans[i]=s[i];
  // }
  cout<<ans<<endl;
  return 0;
}