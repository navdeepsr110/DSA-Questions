#include<bits/stdc++.h>
using namespace std;

// char HighestOccurringChar(char input[]){
//   int index=0;
//   int freq[256]={0};
//   int n=strlen(input);
//   int max=INT_MIN;
//   for(int i=0;i<n;i++){
//      index=input[i];
//      freq[index]++;
//   }
//   char ch;
//   for(int i=0;i<256;i++){
//     if(freq[input[i]]>max){
//         max=freq[input[i]];
//         ch=input[i];
//     }
//   }
//   return ch;
// }


// input - given string
#include<climits>
#include<cstring>
#include<iostream>
using namespace std;
char highestOccurringChar(char input[]) {
    // Write your code here
   int index=0;
   int i=0;
   int arr[256]={0};
   int max=INT_MIN;
     int len = strlen(input);
        for(i=0;i<len;i++)
        {
            index=input[i];
            arr[index]++;
        }
    char ch;
    for(i=0;i<len;i++)
    {
    if(arr[input[i]]>max)
    {
        max=arr[input[i]];       
        ch=input[i];            
     }
    }
 return ch;
    
}





int main(){
    int size=1e6;
    char input[size];
    cin>>input;
   char ans=highestOccurringChar(input);
   cout<<ans;
    // cout<<HighestOccurringChar(input);
}