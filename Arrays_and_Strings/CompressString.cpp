#include<bits/stdc++.h>
using namespace std;

string getCompressedString(string &input){
    string ans="";
    for(int i=0;input[i]!='\0';i++){
        ans+=input[i];
        int count=1;
        while(input[i]==input[i+1] && input[i]!='\0'){
            count++;
            i++;
        }
        if(count>1){
            ans+=48+count;
        }
    }
    return ans;
}

int main(){
    string input;
    cin>>input;
   string ans= getCompressedString(input);
   cout<<ans;
}