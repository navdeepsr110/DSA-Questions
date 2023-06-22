#include<bits/stdc++.h>
using namespace std;
int arrayRotateCheck(int* input, int size){
    int num=0;
    for(int i=0;i<size;i++){
      if(num<input[i])   {
        num=input[i];
      }
      else{
        return i;
      }
    }
    return 0;
}
int main(){
    int size = 5;
    int input[size];
    for(int i=0;i<size;i++){
      cin>>input[i];
    }
    cout<<arrayRotateCheck(input, size)<<endl;
    
}