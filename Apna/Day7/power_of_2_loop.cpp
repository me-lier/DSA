#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = true;
    while(n>1){
        if (n%2!=0){
            flag=false;
            break;
        }
        n/=2;
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
}