#include<iostream>
using namespace std;

int pow(int x, int n){
    if(x == 1) return 1;
        if(x == 0) return 0;
        if(x == -1){
            if(n%2==0){
                return 1;
            }
            return -1;
        }
        if(n == 0){
            return 1;
        }
    long binform = n;
    if(binform<0){
            binform = -binform;
            x = 1/x;
        }
    int ans = 1;
    while(binform > 0){
        if((binform & 1) == 1){
            ans *= x;
        }
        x *=x;
        binform = binform >> 1;
    }
    return ans;
}

int main(){
    int n,x;
    cin>>x>>n;
    cout<<pow(x,n);
}