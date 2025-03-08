#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int LargestRecArea_br(vector<int> &arr){
    int area = 0;
    for(int i = 0; i < arr.size(); i++){
        int len = arr[i];
        int bre = 1;
        int j = i-1;
        while(j >= 0 && arr[j] >= len){
            bre++;
            j--;
        }
        j = i + 1;
        while(j < arr.size() && arr[j] >= len){
            bre++;
            j++;
        }
        area = max(area, (len*bre));
    }
    return area;
}

int LargestRecArea(vector<int> &arr){
    stack<int> st;
    int area = 0;
    
}

int main(){
    vector<int> arr{2,1,5,6,2,3};
    cout<<LargestRecArea_br(arr);
}