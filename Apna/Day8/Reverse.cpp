#include<iostream>
using namespace std;

void Reverse(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low < high){ //O(n/2)
        int k = arr[low];
        arr[low] = arr[high];
        arr[high] = k;
        ++low;
        --high;
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
    Reverse(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}