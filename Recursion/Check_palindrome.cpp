// #include<iostream>
// #include<cstring>
#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(int i, string &s){
   if(i>=s.size()){
    return true;
   }
   if(s[i]!=s[s.size()-i-1]){
    return false;
   }
   return check_palindrome(i+1, s);
}

int main(){
    string s="madaam";
    
    // int n=str.size();
   cout<< check_palindrome(0, s);
}