#include<iostream>
using namespace std;

int main(){
    int n, t_sum=0;
    cin>>n;
    for(int i=1; i<=n; i+=2){
        cout<<i;
        t_sum+=i;
    }
    cout<<t_sum;
}