#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    for(int i=64; i<(n+64); i++){
        for(int j=64; j<=i; j++){
            cout<<(char)(i+1);
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
    int c=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    c=65;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<(char)c++<<" ";
        }
        cout<<endl;
    }
    for(int i=64; i<(64+n); i++){
        for(int j=i+1; j>=65; j--){
            cout<<(char)j;
        }
        cout<<endl;
    }
    //inverted
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=n; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=n; j>i; j--){
            cout<<i+1;
        }
        cout<<endl;
    }
}