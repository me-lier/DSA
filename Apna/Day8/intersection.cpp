#include<iostream>
using namespace std;
void intersection(int arr1[], int n1, int arr2[], int n2){
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<", ";
            }
        }
    }
    return;
}
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    intersection(arr1, n1, arr2, n2);
    
}