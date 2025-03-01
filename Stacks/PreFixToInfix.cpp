#include<iostream>
using namespace std;

string reverse(string &s){
    int low = 0;
    int high = s.length() - 1;
    while(low < high){
        char temp = s[low];
        s[low] = s[high];
        s[high] = temp;

        if(s[low] == '(') s[low] = ')';
        else if(s[low] == ')') s[low] = '(';
        if(s[high] == '(') s[high] = ')';
        else if(s[high] == ')') s[high] = '(';
    }
    return s;
}

bool isOperand(string ele){
    return ele == "+"|| ele == "-"|| ele == "/"|| ele == "*"|| ele == "^";   
}

string PreFixToInFix(string s){
    stack<string> st;
    for(int i = s.length() - 1; i >= 0; i--){
        string ele = "";
        ele += s[i];
        if(isOperand(ele)){
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("(" + a + ele + b +")");
        }else st.push(ele);
    }

    return st.top();
}

int main(){
    cout<<PreFixToInFix("+AB");
}