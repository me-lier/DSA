#include<iostream>
#include<stack>
using namespace std;

bool valid_parenthesis(string par){
    stack<char> st;
    for(char ele : par){
        if(ele == '[' || ele == '{' || ele == '(') st.push(ele);
        else if(ele == ']' || ele == '}' || ele == ')'){
            if(!st.empty()){
                if((ele == ']' && st.top() == '[') || (ele == '}' && st.top() == '{') || (ele == ')' && st.top() == '(')) st.pop();
                else return false;

            }else return false;
        }else return false;
    }

    return true;
}

int main(){
    string par = "[](){}[{({)}]";

    if(valid_parenthesis(par)){
        cout<<"Valid";
    }else cout<<"Not Valid";

}







// https://www.naukri.com/code360/problems/valid-parenthesis_795104
// bool isValidParenthesis(string str)
// {
//     // Write your code here.
//     int len = str.length();
//     stack<char> st;
//     for(int i = 0; i<len; i++){
//         char temp = str[i];
//         if(temp == '(' || temp == '[' || temp == '{'){
//             st.push(temp);
//         }else if(temp == '}' || temp == ')' || temp == ']'){
//             if(!st.empty() && ((temp == '}' && st.top() == '{') || (temp == ')' && st.top() == '(') || (temp == ']' && st.top() == '['))){
//                 st.pop();
//             }else{
//                 return false;
//             }
//         }else{
//             return false;
//         }
//     }
//     return true;
// }