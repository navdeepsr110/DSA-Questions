// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char str[]){
//    int size=0;
   int n=strlen(str);
   for(int i=0;i<n/2;i++){
      if(str[i]!=str[n-i-1]){
        return false;
        break;
      }
   }
   return true;
}

int main(){
    int size=1e6;
    char str[size];
    cin>>str;
    
    cout<<(checkPalindrome(str)?"true":"false");
}
