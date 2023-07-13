#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrence(char input[], char c){
   int len=strlen(input);
   int j=0;
   for(int i=0;i<len;i++){
    if(input[i]!='c'){
      input[j]=input[i];
      j++;
    }
  }
  input[j]='\0';
}

int main(){
    int size=10;
    char input[size];
    gets(input);
    char ch='c';
    removeAllOccurrence(input,ch);
    cout<<input;
}