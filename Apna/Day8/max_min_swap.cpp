#include<iostream>
using namespace std;

void max_min_swap(int arr[], int n){
    int min = INT_MAX;
    int max = INT_MIN;
    int i,j;
    for(int k=0; k<n; k++){
        if(min>arr[k]){
            min = arr[k];
            i=k;
        }
        if(max<arr[k]){
            max = arr[k];
            j=k;
        }
    }

    //swap
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    max_min_swap(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}