#include<iostream>
#include<vector>
using namespace std;

void InsertionSort(vector<int> & arr){
    for(int i = 1; i<arr.size(); i++){
        int curr = arr[i];
        int j = i - 1;
        while(j >= 0 && curr < arr[j]){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = curr;
    }
}

int main(){
    vector<int> arr = {2,4,1,7,3};
    InsertionSort(arr);
    for(int ele : arr){
        cout<<ele<<", ";
    }
}
