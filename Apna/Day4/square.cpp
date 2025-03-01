#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=65; j<=(n+65-1); j++){
            cout<<(char)j;
        }
        cout<<endl;
    } 
    int c=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(c++)%10;
        }
        cout<<endl;
    }
    c=65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)c++;
        }
        cout<<endl;
    }
}