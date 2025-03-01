#include<iostream>
using namespace std;

void swap(int arr[], int i , int j){
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){ // for reverse change here (arr[j] < arr[j+1])....
                swap(arr, j+1, j);
                flag = true;
            }
        }
        for(int k=0; k<n; k++){
            cout<<arr[k]<<", ";
        }
        cout<<endl;
        if(!flag){
            return;
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

    BubbleSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}