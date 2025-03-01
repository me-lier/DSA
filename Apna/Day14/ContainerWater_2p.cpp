#include<iostream>
using namespace std;
int maxProfit(int arr[], int n){
    int maxArea = INT_MIN;
    int i = 0;
    int j = n-1;
    while(i < j){
        int idx = min(arr[i], arr[j]);
        maxArea = max(maxArea, idx*(j-i));
        if(idx == arr[i]){
            i++;
        }else{
            j--;
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