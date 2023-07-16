#include<bits/stdc++.h>
using namespace std;

// void ReverseWordWise(char input[]){
//     int len=strlen(input);
//     len=len-1;
//     // int n=len-1;
//     for(int i=0;i<len/2;i++){
//         // int x=len-i;
//         swap(input[i],input[len-i]);
//         // int temp=input[i];
//         // input[i]=input[n];
//         // input[n]=temp;
//         // n--;
//     }
//     // cout<<input<<endl;
//     len+=1;
//     int i=0;
//     int j=0;
//     while(i<=len){
//         if(input[i]==' ' || input[i]=='\0'){
//             int c=i-1;
//             while(j<=c){
//             swap(input[j],input[c]);
//             j++;
//             c--;
//             }
//             j=i+1;
//         }
//         i++;
//     }
// }

void ReverseWordWise(char input[]){
  int len=strlen(input);
  for(int i=0;i<len/2;i++){
    swap(input[i],input[len-i-1]);
  }
  
  int i=0;
  int j=0;
  for(int i=0;i<=len;i++){
    if(input[i]==' '||input[i]=='\0'){
        int c=i-1;
        while(j<=c){
          swap(input[j],input[c]);
          j++;
          c--;
        }
        j=i+1;
    }
  }
}

int main(){
    int n=20;
    char input[n];
    gets(input);
    ReverseWordWise(input);
    cout<<input<<endl;
    return 0;
}