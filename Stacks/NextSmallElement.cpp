#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> NextSmallerElement_br(vector<int> &arr){
    vector<int> res;
    for(int i = 0; i < arr.size()-1; i++){
        int m = arr[i];
        for(int j = i + 1; j < arr.size(); j++){
            m = min(m, arr[j]);
        }
        if(m != arr[i]) res.push_back(m);
        else res.push_back(-1);
    }
    res.push_back(-1);

    return res;
}

vector<int> NextSmallerElement(vector<int> &arr){
    int n = arr.size();
    vector<int> res(n);
    stack<int> st;
    st.push(-1);
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() > arr[i]){
            st.pop();
        }
        res[i] = st.top();
        st.push(arr[i]);
    }
    return res;
}

int main(){
    vector<int> arr{2,1,4,3};
    vector<int> res = NextSmallerElement(arr);
    for(int ele : res){
        cout<<ele<<", ";
    }

}




// https://www.naukri.com/code360/problems/next-smaller-element_1112581
// #include<stack>
// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     // Write your code here.
//     stack<int> s;
//     s.push(-1);
//     vector<int> res(n);
//     for(int i = n-1; i>=0; i--){
//         while(arr[i] <= s.top()){
//             s.pop();
//         }
//         res[i] = s.top();
//         s.push(arr[i]);
//     }

//     return res;
// }