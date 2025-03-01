#include<iostream>
#include<vector>
using namespace std;

void Reverse(vector<int> &v){
    vector<int> t;
    for(int i=v.size()-1; i>=0; i--){
        t.push_back(v[i]);
    }
    v=t;
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
    Reverse(v);
    for(int i : v){
        cout<<i<<", ";
    }

}