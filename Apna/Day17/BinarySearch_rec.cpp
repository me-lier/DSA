#include<iostream>
using namespace std;

int BinarySearch(int arr[], int k, int low, int high){
    if(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == k) return mid;
        if(arr[mid] > k) return BinarySearch(arr, k, low, mid - 1);
        if(arr[mid] < k) return BinarySearch(arr, k, mid + 1, high);
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n]; //sorted array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<BinarySearch(arr, k, 0, n - 1)<<endl;
}