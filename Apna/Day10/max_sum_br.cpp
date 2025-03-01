#include<iostream>
using namespace std;
int max(int a, int b){
    if(a>b) return a;
    return b;
}

int sumarraymax(int arr[], int n){
    int maxx = INT_MIN;
    for(int i=0; i<n; i++){
        int c = 0;
        for(int j=i; j<n; j++){
            c += arr[j];
            maxx = max(maxx, c);
        }
    }
    return maxx;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sumarraymax(arr, n);
}