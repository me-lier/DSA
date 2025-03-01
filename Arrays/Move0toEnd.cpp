#include<iostream>
#include<vector>
using namespace std;

void MoveZeroesToEnd(vector<int> &arr){
    int j = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j++]);
        }
    }
}
int main(){
    vector<int> res{1,0,0,2,3,4,0,2,0};
    MoveZeroesToEnd(res);
    for(int ele : res){
        cout<<ele<<", ";
    }
    cout<<endl;
}