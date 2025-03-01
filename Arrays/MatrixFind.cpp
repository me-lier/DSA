#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,2},{3,3,4},{5,5,6}};
    int k = 3;
    int i = 0;
    if(k >= 3) i = k/3;

    cout<<arr[i][k - i*3]<<endl;

}