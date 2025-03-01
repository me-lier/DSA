#include<iostream>
using namespace std;

void swap_s(int &a, int &b){ //with extra space....
    int t = a;
    a = b;
    b = t;
}

void swap(int &a, int &b){ // without any extra space....
    a = a+b;
    b = a-b;
    a = a-b;
}

int main(){
    int a = 10;
    int b = 5;
    swap(a,b);
    cout<<a<<", "<<b;

}