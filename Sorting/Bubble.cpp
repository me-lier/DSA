#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i = 0; i<arr.size(); i++){
        bool flag = true;
        for(int j = 0; j<arr.size()-i-1; j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                flag = false;
            }
        }
        if(flag){
            return;
        }
    }
}

int main(){
    vector<int> arr = {2,4,1,3,5};
    bubbleSort(arr);
    for(int ele : arr){
        cout<<ele<<", ";
    }
}