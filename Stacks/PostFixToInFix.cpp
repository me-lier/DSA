#include<iostream>
using namespace std;

bool isOperator(char ele){
    return ele == '+' || ele == '-' || ele == '*' || ele == '/' || ele == '^';
}

string PostFixToInFix(string s){
    stack<string> st;
    for(char ele : s){
        string temp = "";
        temp += ele;
        if(isOperator(ele)){
            string b = st.top();
            st.pop();
            string a = st.top();
            st.pop();
            temp = "(" + a + ele + b + ")";
        }
        st.push(temp);
    }
    return st.top();
}

int main(){
    cout<<PostFixToInFix("AB+C*");
}