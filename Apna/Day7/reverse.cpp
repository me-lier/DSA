#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;

    while(n>0){
        ans=(n%10) + ans*10;
        n/=10;
    }
    cout<<ans;
}