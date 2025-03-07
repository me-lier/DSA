#include<iostream>
#include<stack>
using namespace std;

int min_cost(string txt){
    if(txt.length() % 2 != 0) return -1;
    stack<char> st;
    int a = 0, b = 0;
    for(char ele : txt){
        if(ele == '{'){
            a++;
            st.push(ele);
        }else if(ele == '}'){
            b++;
            if(!st.empty() && st.top() == '{'){
                a--, b--;
                st.pop();
            }
        }
    }

    return (a+1)/2 + (b+1)/2; // formuala.......
}

int main(){
    string txt = "{}{}{}{{{{";
    cout<<min_cost(txt);
}