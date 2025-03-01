#include<iostream>
using namespace std;

bool is_Operator(char ele){
    return ele == '+' || ele == '-' || ele == '*' || ele == '/' || ele == '^';     
}

string PostFixToPreFix(string s){
    stack<string> st;
    for(char ele : s){
        string temp = "";
        temp += ele;
        if(is_Operator(ele)){
            string b = st.top();
            st.pop();
            string a = st.top();
            st.pop();
            temp += a + b;
        }
        st.push(temp);
    }
    return st.top();
}

int main(){
    cout<<PostFixToPreFix("AB-DE+F*/");
}