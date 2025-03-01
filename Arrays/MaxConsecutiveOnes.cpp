#include<iostream>
#include<vector>
using namespace std;

int MaxOne(vector<int> &arr){
    int c = 0;
    int temp = 0;
    for(int ele : arr){
        if(ele != 1){
            temp = 0;
        }else{
            temp++;
        }
        c = max(c, temp);
    }
    return c;
}

int main(){
    vector<int> arr{1,1,0,1,1,1,1,0,1};
    cout<<MaxOne(arr);
}