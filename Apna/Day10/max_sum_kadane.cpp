#include<iostream>
using namespace std;

int kadane_max_sum(int arr[], int n){    // Max sub-array sum...
    int sum = INT_MIN; 
    int c = 0;
    for(int i=0; i<n; i++){
        c += arr[i];
        sum = max(c, sum);
        if(c<0) c=0; //main highlight of this algo...
    }

    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<kadane_max_sum(arr, n);
}