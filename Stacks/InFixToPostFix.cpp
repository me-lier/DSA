#include<iostream>
using namespace std;

bool isOperand(char ele){
    return ((ele >= 'A' && ele <= 'Z') || (ele >= 'a' && ele <= 'z') || (ele >= '0' && ele <='9'));
}

int precedence(char ele){
    if(ele == '^') return 3;
    if(ele == '*' || ele == '/') return 2;
    if(ele == '+' || ele == '-') return 1;
    return 0;
}

string InfixToPostFix(string s){
    stack<char> st;
    string ans = "";
    for(char ele : s){
        if(isOperand(ele)) ans += ele;
        else if(ele == '('){
            st.push(ele);
        }else if(ele == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            if(st.top() == '(') st.pop();
        }else{
            while(!st.empty() && precedence(ele) <= precedence(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(ele);
        }
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){
    cout<<InfixToPostFix("(a+b)*c");
}