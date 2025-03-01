#include<iostream>
#include<map>
using namespace std;

int MissingNumberbr(vector<int> &arr){ //BR
    for(int i = 1; i < arr.size(); i++){
        bool isFlag = true;
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] == i){
                isFlag = false;
                break;
            }
        }
        if(isFlag) return i;
    }
    return -1;
}

int MissingNumbermp(vector<int> &arr){ //mp BR
    map<int, int> mp;
    for(int ele : arr){
        mp[ele]++;
    }
    for(int i = 1; i < arr.size(); i++){
        if(!mp.count(i)){
            return i;
        }
    }
    return -1;
}

int MissingNumberopp(vector<int> &arr){ //Optimal
    int sum = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int pro = n*(n+1)/2;
    return pro - sum;
}

int MissingNumber(vector<int> &arr){ //Most Optimal  Bits
    int xor1 = 0;
    for(int i = 0; i < arr.size(); i++){
        xor1 ^= (i+1)^arr[i];
    }
    return xor1;
}

int main(){
    vector<int> arr{1,2,4,0};
    cout<<MissingNumber(arr);
}