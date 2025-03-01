#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int mid){
    int cow = 1, dist = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] - dist >= mid){
            cow++;
            dist += arr[i];
        }

        if(cow == m){
            return true;
        }
    }

    return false;
}

int MaxDistance(vector<int> arr, int n, int m){
    sort(arr.begin(), arr.end());
    int low = 1, high = arr[n-1] - arr[0], ans = -1;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    int t,n,m;
    cin>>t;
    while(t!=0){
        --t;
    cin>>n>>m; //m>=2...

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<MaxDistance(arr, n, m);
    }
}