#include<iostream>
using namespace std;

void PairSum(int arr[], int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == k){
                cout<<arr[i]<<", "<<arr[j]<<endl;
            }
        }
    }
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
    PairSum(arr, n, k);
}