// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse_Word(char input[]){
int len = strlen(input);
int j=0;
for(int i=0;i<=len;i++){
    if(input[i]==' ' || input[i]=='\0'){
        int c=i-1;
        while(c>=j){
            swap(input[c],input[j]);
            j++;
            c--;
        }
        j=i+1;
    }
  }
}
int main(){
    int size=10;
    char input[size];
    gets(input);
    Reverse_Word(input);
    cout<<input<<endl;
}