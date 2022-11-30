#include<iostream>
using namespace std;

void Printnames(int check){
    
    if(check>=5){
        return;
    }
        cout<<"Navdeep Singh Rathore"<<endl;
        // check++;
    
    Printnames(check+1);
}
int main(){
    
    Printnames(0);
}