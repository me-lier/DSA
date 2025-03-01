#include<iostream>
using namespace std;

void max_min(int arr[], int n){
    int minn = INT_MAX;
    int maxx = INT_MIN;
    for(int i=0; i<n; i++){
        // if(arr[i]>max) max = arr[i];
        maxx = max(arr[i], maxx);
        // if(arr[i]<min) min = arr[i];
        minn = min(arr[i], minn);
    }
    cout<<"Max:"<<maxx<<endl<<"Min:"<<minn<<endl;
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    max_min(arr, n);

}