#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int high, int mid){
    int n1 = mid-low+1;
    int n2 = high - mid;

    int l[n1];
    int r[n2];
    
    for(int i = 0; i<n1; i++){
        l[i] = arr[low + i];
    }
    for(int i = 0; i<n2; i++){
        r[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k=low;
    while(i<n1 && j<n2){
        if(l[i] <= r[j]){
            arr[k++] = l[i++];
        }else{
            arr[k++] = r[j++];
        }
    }
    while(i<n1){
        arr[k++] = l[i++];
    }
    while(j<n2){
        arr[k++] = r[j++];
    }
}

void MergeSort(vector<int> &arr, int low, int high){
    if(low < high){
        int mid = low + (high - low) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);

        merge(arr, low, high, mid);
    }
}

int main(){
    vector<int> arr = {2,4,1,5,8,3};
    MergeSort(arr, 0, arr.size()-1);
    for(int ele : arr){
        cout<<ele<<", ";
    }
}