#include<iostream>
using namespace std;

vector<int> getSecondOrderElements(vector<int> a) {
    int n = a.size();
    int max = INT_MIN;
    int prev_max = INT_MIN;
    int min = INT_MAX;
    int prev_min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            prev_max = max;
            max = a[i];
        }else if(prev_max < a[i] && a[i] < max){
            prev_max = a[i];
        }
        if(min > a[i]){
            prev_min = min;
            min = a[i];
        }else if(prev_min > a[i] && a[i] > min){
            prev_min = a[i];
        }
    }

    return {prev_max, prev_min};
}


int main(){
    vector<int> v{2,1,7,3,9,3,6};
    vector<int> res = getSecondOrderElements(v);
    cout<<res[0]<<" "<<res[1];
}