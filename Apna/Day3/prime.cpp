#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n <= 1){
        cout<<"Entered Number is Not Prime";
;
    }
    bool flag = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<"Entered Number is Prime";
    }else{
        cout<<"Entered Number is Not Prime";
    }

}