#include<iostream>
#include<vector>
using namespace std;

bool fun(vector<int> arr, int k){
    int c = 0;
    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            c++;
        }
    }
    return k > c;
}

int main(){
    int q;
    cin>>q;
    while(q>0){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        if(fun(arr, k)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        q--;
    }
    
    return 0;
}