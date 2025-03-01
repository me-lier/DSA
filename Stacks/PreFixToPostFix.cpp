#include<iostream>
using namespace std;

bool is_Operator(string ele){
    return (ele == "+" || ele == "-" || ele == "*" || ele == "/" || ele == "^");
}

string PreFixToPostFix(string s){
    stack<string> st;
    for(int i = s.length() - 1; i >= 0; i--){
        string ele = "";
        ele += s[i];
        if(is_Operator(ele)){
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            ele = a + b + ele;
        }
        st.push(ele);
    }
    return st.top();
}

int main(){
    cout<<PreFixToPostFix("/-AB*+DEF");
}