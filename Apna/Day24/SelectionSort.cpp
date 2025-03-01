#include<iostream>
using namespace std;

void swap(int arr[], int i , int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int key = i;
        for(int j=i+1; j<n; j++){
            if(arr[key] > arr[j]){ // for reverse change here (arr[key] < arr[j])...
                key = j;
            }
        }
        if(key != i){
            swap(arr, key, i);
        }
    }
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    SelectionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}