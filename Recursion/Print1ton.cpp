#include<iostream>
using namespace std;

void print1toN(int start, int n){
    if(start>n){
        return;
    }

    cout<<start<<endl;
    print1toN(start+1,n);
}

int main(){
  int n;
  cin>>n;
  int start=1;
  print1toN(start,n);
}