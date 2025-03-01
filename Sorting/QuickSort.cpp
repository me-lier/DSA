#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int j = low - 1;
    for(int i = low; i<high; i++){
        if(arr[i] <= pivot){
            j+=1;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[high];
    arr[high] = arr[j+1];
    arr[j+1] = t;
    return j+1;
}
void QuickSort(vector<int> &arr, int low, int high){
    if(low < high){
        int pivot = partition(arr,low,high);
        QuickSort(arr, low , pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}

int main(){
    vector<int> arr = {2,5,1,9,4,3};
    QuickSort(arr, 0,arr.size()-1);
    for(int ele : arr){
        cout<<ele<<", ";
    }
}