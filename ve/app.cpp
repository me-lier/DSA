#include<iostream>
#include<vector>
using namespace std;

vector<int> MaxOr(int n, int k){
    vector<int> res;
    int low  = 0;
    int high = n-1;
    while(low < high){
        int temp = 0 ;
        temp = (low | high);
        if(temp == k){
            res.push_back(low++);
            res.push_back(high--);
        }else if(temp < k){
            low++;
        }else{
            high--;
        }
    }
    return res;
}

int main(){
    vector<int> ans = MaxOr(7,7);
    int sum = 0;
    for(int ele : ans){
        cout<<ele<<", ";
        sum |= ele;
    }
    cout<<endl;
    cout<<sum;


}