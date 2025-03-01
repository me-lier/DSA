#include<iostream>
using namespace std;
void pro_sum(int arr[], int n){
    int sum = 0;
    int pro = 1;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        pro*=arr[i];
    }
    cout<<sum<<endl<<pro;
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    pro_sum(arr,n);
}