#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int> &arr){
    for(int i = 0; i<arr.size()-1; i++){
        int min = i;
        for(int j = i + 1; j<arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }
    }
}

int main(){
    vector<int> arr = {3,2,6,1,5};
    SelectionSort(arr);
    for(int ele : arr){
        cout<<ele<<", ";
    }
}