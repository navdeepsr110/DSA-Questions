//Returning the summation of n numbers

#include<iostream>
using namespace std;

int f(int n){
    if(n<1){
        return 0;
    }
    return n+f(n-1);
}
int main(){
    int n=5;
   int ans = f(n);
   cout<<ans<<endl;
}