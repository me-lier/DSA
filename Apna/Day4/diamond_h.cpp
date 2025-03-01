#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<2*i; j++){
            cout<<" ";
        }
        if(i>0){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-2; i>=0; i--){
        for(int j=n-1; j>i; j--){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<2*i; j++){
            cout<<" ";
        }
        if(i>0){
            cout<<"*";
        }
        cout<<endl;
    }
}