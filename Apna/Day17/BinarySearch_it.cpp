#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int k){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        // int mid = (low + high) / 2; //Normal form where we can encounter the Integer overflow...
        int mid = low + (high - low)/2; //Optimized version

        if(arr[mid] == k) return mid;
        if(arr[mid] > k) high = mid - 1;
        else low = mid + 1;
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
    cout<<BinarySearch(arr, n, k)<<endl;
}