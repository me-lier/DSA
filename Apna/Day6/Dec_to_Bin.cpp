#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,c=0,ans=0;
    cin>>n;
    while(n>0){
        ans+=pow(10,c++)*(n%2);
        n/=2;
    }
    cout<<ans;
}