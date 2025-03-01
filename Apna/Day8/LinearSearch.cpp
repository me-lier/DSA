#include<iostream>
using namespace std;

void LinearSearch(int n, int arr[], int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            cout<<i+1;
            return;
        }
    }
    cout<<"-1";
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    LinearSearch(n,arr,k);
}