#include<iostream>
#include<stack>
using namespace std;

bool isOperator(char ele){
    return (ele == '+' || ele == '-' || ele == '/' || ele == '*');
}

bool redundant_brackets(string txt){
    stack<char> st;
    for(char ele : txt){
        if(ele == '(' || isOperator(ele)) st.push(ele);
        else if(ele == ')'){
            bool flag = true;
            while(!st.empty() && st.top() == '('){
                if(isOperator(st.top())) flag = false;
                st.pop();
            }
            if(flag == true) return true;
            st.pop();
        }
    }
    return false;
}

int main(){
    string txt = "(a+b)*(c)";
    if(redundant_brackets(txt)) cout<<"YES";
    else cout<<"NO";

}


// https://www.naukri.com/code360/problems/redundant-brackets_975473
// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     // Write your code here.
//     stack<char> st;
//     for(char e : s){
//         if(e == '(' || e == '+' || e == '-' || e == '/' || e == '*'){
//             st.push(e);
//         }else if(e == ')'){
//             bool flag = true;
//             while(st.top() != '('){
//                 if(st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*'){
//                     flag = false;
//                 }
//                 st.pop();
//             }
//             if(flag == true){
//                 return true;
//             }
//             st.pop();
//         }
//     }
//     return false;
// }
