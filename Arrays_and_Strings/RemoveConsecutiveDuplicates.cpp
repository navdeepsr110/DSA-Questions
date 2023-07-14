#include<bits/stdc++.h>
using namespace std;

void RemoveConsecutiveDuplicates(char input[]){
 int len=strlen(input);
 int j=0;
 for(int i=0;i<len;i++){
    if(input[i]!=input[i+1]){
      input[j]=input[i];
      j++;
    }
  }
  input[j]='\0';
}


int main(){
    int n=10;
    char input[n];
    cin>>input;
    RemoveConsecutiveDuplicates(input);
    cout<<input;
    return 0;
}