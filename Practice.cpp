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

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   string s;
//   cin>>s;
//   int size= s.size();
//  int n1=s[0]-48;
//  int n2=s[1]-48;
//  int num=n1*10 + n2;
//   // cout<<n1<<" "<<n2<<endl;
//   // cout<<num;
//   if(s[size-2]=='A' && s[1]=='2' && s[0]=='1'){
//     s[0]='0';
//     s[1]='0';
//   }
//   else if((s[0]=='0' || s[1]=='1') && s[size-2]=='P'){
//     num=num+12;
//     int n3=num%10;
//     // cout<<num<<endl;
//     num=num/10;
//     // int n4=num%100;
//     s[0]=num + 48;
//     s[1]=n3 + 48;
//   }
  // else{
  //   s[0]=1;
  // }
  // int start=0;
  // int length=size-2;
  // string ans=s;
//  string ans= s.substr(start, length);
  //  = s.substr(start, (end - start));
  // for(int i=0;i<size-3;i++){
  //   // cout<<s[i];
  //   ans[i]=s[i];
  // }
//   cout<<ans<<endl;
//   return 0;
// }

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
    // Write C++ code here
    // std::cout << "Hello world!";
//     int n;
//     cin>>n;
//     int flag=1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             flag=0;
//             break;
//         }
//     }
//     if(flag==1){
//         cout<<"Maje";
//     }
//     else{
//         cout<<"Nhi Maje";
//     }

//     return 0;
// }

// Reverse a number

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n, rev=0;
//   cin>>n;
//   while(n>0){
//     int temp = n % 10;
//     rev = rev * 10 + temp;
//     n=n/10;
//   }
//   cout<<rev<<endl;
// }

/*
#include<iostream>
using namespace std;

void arrange(int *arr, int n){
  int left = 0;
  int right = n-1;
  int counter=1;
  while(left<=right){
    if(counter%2!=0){
    arr[left]=counter;
    left++;
    counter++;
  }
  else{
    arr[right]=counter;
    right--;
    counter++;
  }
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  arrange(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}*/
// #include<bits/stdc++.h>
// using namespace std;

// void intersection(int *input1, int *input2, int size1, int size2){
//   for(int i=0;i<size1;i++){
//    for(int j=0;j<size2;j++){
//     if(input1[i]==input2[j]){
//       cout<<input1[i]<<" ";
//     }
//    }
//   }
// }

// int main(){
//   int n=5;
//   int arr1[]={1,2,3,4,5};
//   int arr2[]={4,1,3,7,8};
//   intersection(arr1, arr2, n, n);
//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int largest=INT_MIN,sec_largest=INT_MIN;
//    int arr[]={12, 35, 1, 10, 34, 1};
//    sort(arr, arr+6);
//     for (int i = 0 ; i < 6 ; i++){
//         if( arr[i] > largest ){
//             sec_largest = largest;
//             largest = arr[i];
//         }
// }
//   cout<<sec_largest<<largest<<endl;
// }

// your code goes here// Online C++ compiler to run C++ program online

// #include <iostream>
// using namespace std;

// int binarySearch (int input[], int val, int n){
//     int s=0;
//     int e=n-1;
//     for(int i=0;i<n/2;i++){
//     int mid=(s+e)/2;
//     if(input[mid]==val){
//         return mid;
//     }
//     else if(input[mid]<val){
//         s=mid+1;
//     }
//     else{
//         e=mid-1;
//     }
//     }
//     return -1;
// }

// int binarySearch(int input[],int n, int val){
//     int start=0;
//     int end=n-1;
//     for(int i=0;i<=n/2;i++){
//         int mid = (start+end)/2;
//         if(input[mid]==val){
//            return mid;
//         }
//         else if(input[mid]<val){
//            start=mid+1;  
//         }
//         else{
//             end=mid-1;
//         }
//     }
//   return -1;
// }





// int main() {
//     // Write C++ code here
//     int n;
//     cin>>n;
//    int input[n];
//    for(int i=0;i<n;i++){
//        cin>>input[i];
//    }
//    cout<<"Enter th value";
//    int val;
//    cin>>val;
//   cout<< binarySearch(input, val, n);
    
// }


// #include<iostream>
// using namespace std;

// int binarySearch(int input[], int n, int val){
//     int start=0,mid;
//     int end=n-1;
//     for(int i=0;i<=n/2;i++){
//         mid = (start+end)/2;
//         if(input[mid]==val){
//            return mid;
//         }
//         else if(input[mid]<val){
//            start=mid+1;  
//         }
//         else{
//             end=mid-1;
//         }
//     }
//   return -1;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//          cin>>arr[i];
//     }
//     int val;
//     cin>>val;
//   cout<<binarySearch(arr,n,val);
// }

// #include<iostream>
// using namespace std;
// void selectionSort(int* arr, int n){
//  for(int i=0;i<n;i++){
//   for(int j=0;j<n-i-1;j++){
//     if(arr[j]>arr[j+1]){
//       int temp=arr[j+1];
//       arr[j+1]=arr[j];
//       arr[j]=temp;
//     }
//   }
//  }
// }
// int main(){
// int n=5;
// int arr[]={3,2,5,1,6};
// selectionSort(arr,n);
// for(int i=0;i<n;i++){
//   cout<<arr[i]<<" ";
// }
// }

#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
 for(int i=1;i<n;i++){
  int current=arr[i];
  int j=i-1;
  while(arr[j]>current && j>=0){
    arr[j+1]=arr[j];
    j--;
  }
  arr[j+1]=current;
 }
}
int main(){
   int arr[]={1,6,5,2,8};
   int n=5;
  insertion_sort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}