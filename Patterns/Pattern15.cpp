#include<iostream>
using namespace std;

int main(){
    int n=5;

      int space=2*n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            
            for(int j=0;j<space-2;j++){
                cout<<"  ";
            }
            space=space-2;
            // cout<<endl;
            
         for(int k=i;k>=1;k--){
             cout<<k<<" ";
         }
            cout<<endl;
        // }
            
            

            
        }
    
}