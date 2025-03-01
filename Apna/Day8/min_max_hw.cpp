#include<iostream>
using namespace std;

void max_min(int arr[], int n){
    int min = INT_MAX;
    int max = INT_MIN;
    int idxmax = -1;
    int idxmin = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>max) idxmax = i;
        // maxx = max(arr[i], maxx);
        if(arr[i]<min) idxmin = i;
        // minn = min(arr[i], minn);
    }
    cout<<"Max idx:"<<idxmax<<endl<<"Min idx:"<<idxmin<<endl;
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