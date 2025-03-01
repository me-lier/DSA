#include<iostream>
using namespace std;
int maxProfit(int arr[], int n){
    int maxArea = INT_MIN;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int minl = min(arr[i], arr[j]);
            maxArea = max(maxArea, minl*(j-i));
        }
    }
    return maxArea;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl<<maxProfit(arr, n);
}