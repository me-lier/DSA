#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int fact_r(int n){
    if(n<0) return -1;
    if(n==1) return 1;
    return n * fact_r(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact_r(n)<<endl;
}