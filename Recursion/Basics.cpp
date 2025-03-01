#include<iostream>
using namespace std;

void printNTimes(string name, int n){
    if(n < 0) return;
    cout<<name<<endl;
    printNTimes(name, n-1);
}

void printLinearly(int n){
    if(n < 0) return;
    printLinearly(n-1);
    cout<<n<<endl;
}
void printLinearlyNto1(int n){
    if(n < 0) return;
    cout<<n<<endl;
    printLinearlyNto1(n-1);
}

int main(){
    // printNTimes("Srinivas", 10);
    // printLinearly(15);
    printLinearlyNto1(15);
    
}