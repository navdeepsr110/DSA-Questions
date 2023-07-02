#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPermutation(char str1[], char str2[]){
    int freq[256]={0};
    int index=0;
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len1;i++){
        index=str1[i];
        freq[index]++;
    }
    for(int j=0;j<len2;j++){
        index=str2[j];
        freq[index]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}


int main(){
    int size=1e6;
    char str1[size], str2[size];
    cin>>str1>>str2;
    cout<<(isPermutation(str1,str2)? "true":"false");
}