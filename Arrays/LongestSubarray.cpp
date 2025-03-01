#include<iostream>
using namespace std;

// Subarray is Contigous manner.. one after one .......

int LongestSubarraylength(vector<int> &arr, int k){ //BR..
    int res = 0;
    for(int i = 0; i < arr.size(); i++){
        int c = 0;
        int sum = 0;
        for(int j = i; j < arr.size(); j++){
            sum += arr[j];
            c++;
            if(sum == k){
                res = max(res, c);
            }
        }
    }
    return res;
}

int LongestSuarrayLength(vector<int> &arr, int k){
    vector<int> prefix{arr[0]};
    for(int i = 1 ; i < arr.size(); i++){
        prefix.push_back(prefix.back() + arr[i]);
    }
    int res = 0;
    for(int i = 0; i < prefix.size(); i++){
        if(prefix[i] == k) res = max(res, i);
    }
    for(int i = res + 1; i<prefix.size(); i++){
        if(prefix[i] - arr[prefix.size() - res + i]){
            res = kax
        }
    }

    return -1;
}

int main(){
    vector<int> arr{10, 5, 2, 7, 1, -10};
    int k = 15;
    cout<<LongestSubarraylength(arr, k);
}