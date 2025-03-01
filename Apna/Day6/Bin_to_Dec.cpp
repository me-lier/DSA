#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,ans=0,i=0;
    cin>>n;
    while(n>0){
        ans+=pow(2,i++) * (n%10);
        n/=10;
    }
    cout<<ans<<endl;
}