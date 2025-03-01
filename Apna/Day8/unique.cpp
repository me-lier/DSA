#include<iostream>
using namespace std;
void unique(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    //print
    int k=-1;
    for(int i=0; i<n; i++){
        if(k!=arr[i]){
            k = arr[i];
            cout<<arr[i]<<", ";
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unique(arr,n);
}