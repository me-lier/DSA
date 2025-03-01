#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr+1<<endl;
    cout<<*arr+3<<endl;
    cout<<*ptr+2<<endl;
}