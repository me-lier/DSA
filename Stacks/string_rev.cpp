#include<iostream>
#include<stack>
using namespace std;

string rev(string txt){
    stack<char> st;
    for(char ele : txt){
        st.push(ele);
    }
    string res = "";
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    return res;
}

int main(){
    string txt = "Srinivas";
    string txt_rev = rev(txt);
    cout<<txt_rev;

}