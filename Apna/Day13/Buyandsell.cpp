#include<iostream>
using namespace std;

int max(int i, int j){
    if(i > j) return i;
    return j;
}
int min(int i, int j){
    if(i < j) return i;
    return j;
}

int maxProfit(int arr[], int n){
    int bestBuy = arr[0];
    int maxP = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > bestBuy){
            maxP = max(maxP, arr[i] - bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);
    }
    return maxP;
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