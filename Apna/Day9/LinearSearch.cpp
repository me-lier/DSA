#include<iostream>
#include<vector>
using namespace std;

void LinearSearch(vector<int> &v, int k){
    int i=0;
    for(int i : v){
        i++;
        if(k == i){
            cout<<i;
            return;
        }
    }
    cout<<"-1";
    return;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int k;
    cin>>k;
    LinearSearch(v,k);
}