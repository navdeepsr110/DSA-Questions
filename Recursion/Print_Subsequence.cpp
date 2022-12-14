#include<iostream>
#include<vector>
using namespace std;

void PrintSubsequence(int ind, int arr[], vector<int>ds, int n){

    if(ind == n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
           cout<<"{}";
        }
        cout<<endl;
        return;
    }
// take or pick the particular index into the subsequence.
    ds.push_back(arr[ind]);

    PrintSubsequence(ind+1, arr, ds, n) ;

    ds.pop_back();
    
// not pick, or not take condition, this element is not added to your subsequence.    
    PrintSubsequence(ind+1, arr, ds, n) ;
}

int main(){
    
    vector<int> v;
    int n=3;
    int arr[]={3,1,2};
    PrintSubsequence(0, arr, v, n);

}