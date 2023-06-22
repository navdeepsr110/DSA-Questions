#include<bits/stdc++.h>
using namespace std;

bool CheckPalindrome(char str[]){
    int size = strlen(str);
    for(int i=0;str[i]!='\0';i++){
       if(str[i]!=str[size-i-1]){
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
   cout<< ( CheckPalindrome(str)? "true" : "false" );
    return 0;
}