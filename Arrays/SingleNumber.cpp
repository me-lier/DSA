#include<iostream>
#include<map>
using namespace std;

int SingleNumbr(vector<int> &arr){ //BR
    for(int i = 0; i < arr.size(); i++){
        bool flag = true;
        for(int j = 0; j < arr.size(); j++){
            if(arr[i] == arr[j] && i != j){
                flag = false;
                break;
            }
        }
        if(flag) return arr[i];
    }
    return -1;
}
int SingleNummp(vector<int> &arr){ // mp br
    map<int, int> mp;
    for(int ele : arr){
        mp[ele]++;
    }
    for(auto ele : mp){
        if(ele.second == 1){
            return ele.first;
        }
    }
    return -1;
}
int SingleNum(vector<int> &arr){ //Optimal
    int c = 0;
    for(int ele : arr){
        c ^= ele;
    }
    return c;
}

int main(){
    vector<int> arr{1,2,4,1,2};
    cout<<SingleNummp(arr);
}