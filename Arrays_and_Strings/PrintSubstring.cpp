#include<iostream>
#include<cstring>
using namespace std;

void printSubstring(char input[])  {
    int len= strlen(input);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;k++){
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}

int main(){
    int size=1e6;
    char input[size];
    cin>>input;
    printSubstring(input);
}