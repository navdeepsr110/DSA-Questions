#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int input[],int n){
   int largest=INT_MIN;
   int secondLargest=INT_MIN;
   int i=0;
   while(i<n){
     if(largest<input[i])  {
        secondLargest=largest;
        largest=input[i];
     }
     else if(input[i]>secondLargest && input[i]!=largest){
        secondLargest=input[i];
     }
     i++;
   }
   return secondLargest;
}

int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<findSecondLargest(input,n);
    return 0;
}