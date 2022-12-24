#include<iostream>
using namespace std;

int pairSum(int* input, int size, int x){
   int count=0;
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(input[i]+input[j]==x){
            count++;
        }
    }
   }
   return count;
}

int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<pairSum(input,n,x);
}