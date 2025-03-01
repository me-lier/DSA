#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

void RotateByKLeftbr(vector<int> &arr, int k){ //bruteForce
    int n = arr.size();
    vector<int> res;
    for(int i = 0; i < n; i++){
        res.push_back(arr[(k+i)%n]);
    }
    arr = res;
}
void RotateByKLeft(vector<int> & arr, int k){
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.end());
}
void RotateByKRight(vector<int> & arr, int k){
    reverse(arr.begin(), arr.end());
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(), arr.begin()+k);
}
void RotateByKRightbr(vector<int> &arr, int k){
    int n = arr.size();
    vector<int> res;
    for(int i = 0; i < n; i++){
        res.push_back(arr[(n-k+i)%n]);
    }
    arr = res;
}

int main(){
    vector<int> res{1,2,3,4,5,6,7};
    int k = 3;
    vector<int> temp = res;
    RotateByKLeft(temp, k);
    for(int ele : temp){
        cout<<ele<<", ";
    }
    cout<<endl;
    RotateByKRight(temp, k);
    for(int ele : temp){
        cout<<ele<<", ";
    }

}