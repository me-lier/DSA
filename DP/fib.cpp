#include<iostream>
using namespace std;
vector<int> dp{0,1};

int fib(int n){
    if(n < 0) return -1;
    if(n < dp.size()) return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}

int main(){
    cout<<fib(40)<<endl;
    cout<<fib(10)<<endl;
    cout<<fib(20)<<endl;
    cout<<fib(33)<<endl;
    cout<<fib(39)<<endl;
    cout<<fib(5)<<endl;
    cout<<fib(1)<<endl;
    cout<<fib(9)<<endl;
    cout<<fib(10)<<endl;
    cout<<fib(13)<<endl;
}