#include<iostream>
using namespace std;

int comp(int n){
    if(n == 0) return 1;
    int nn = n;
    int ans = 0;
    while(nn != 0){
        ans = ans << 1 | 1;
        nn = nn >> 1;
    }
    return ~n&ans;
}

bool powof2(int n){
    // if(n == 1) return true;
    while(n > 1){
        if((n & 1) == 1){
            return false;
        }
        n = n>>1;
    }
    return true;
}

int findunique(vector<int> arr){//XOR
    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum ^= nums[i];
    }
    return sum;

}

int main(){
    int n;
    cin>>n;
    // cout<<comp(n);
    if(powof2(n)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}