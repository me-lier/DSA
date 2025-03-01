#include<iostream>
using namespace std;

bool Sorted_Rotated(vector<int> arr){
    int n = arr.size();
    int c = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]) c++;
    }
    if(arr[0] < arr[n-1]) c++;
    return c == 1;
}

int main(){
    vector<int> arr{3,4,5,1,2};
    cout<<Sorted_Rotated(arr);
}