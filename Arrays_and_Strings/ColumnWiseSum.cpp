#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int j=0;j<n;j++){
        sum=0;
        for(int i=0;i<m;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
}