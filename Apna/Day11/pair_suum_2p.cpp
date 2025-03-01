#include<iostream>
using namespace std;

void PairSum(int arr[], int n, int k){ // Soted array we have to pass....
    int i=0 ,j=n-1;
    while(i<j){ // O(n)
        if(arr[i] + arr[j] == k){
            cout<<arr[i]<<", "<<arr[j];
            return;
        }else if(arr[i] + arr[j] > k){
            j--;
        }else if(arr[i] + arr[j] < k){
            i++;
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
    PairSum(arr, n, k);
}