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

void rev_process(string &s){
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

        low++;
        high--;
    }
}

string InfixToPreFix(string s){
    rev_process(s);
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
        }else if(ele == '^'){
            while(!st.empty() && precedence(ele) <= precedence(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(ele);
        }else{
            while(!st.empty() && precedence(ele) < precedence(st.top())){
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
    rev_process(ans);

    return ans;
}

int main(){
    cout<<InfixToPreFix("(A^B^C)");

}