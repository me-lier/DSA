#include<iostream>
using namespace std;
bool isValid(int arr[], int n, int m, int mid){
    int painter = 1, walls = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mid){
            return false;
        }
        if(arr[i] + walls <= mid){
            walls += arr[i];
        } else {
            painter++;
            walls = arr[i];
        }
    }
    return painter <= m;
}

int PainterPartition(int arr[], int n, int m, int r){
    if(n==1) return arr[0];
    
    int high = 0, low = INT_MIN;
    for(int i=0; i<n; i++){
        high += arr[i];
        low = max(low, arr[i]);
    }
    if(m == 1) return high;
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n, l, r;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<PainterPartition(arr, n, l, r);

}