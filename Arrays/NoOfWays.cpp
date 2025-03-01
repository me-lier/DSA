#include<iostream>
using namespace std;

vector<int> dp{1,2};

int noOfWays(int n){
    if(n < 0) return 0;
    if(n < dp.size()) return dp[n];
    return dp[n] = noOfWays(n-2) + noOfWays(n-1);
}

int main(){
    cout<<noOfWays(10);
}