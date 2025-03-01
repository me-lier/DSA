#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int size){
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     bool is_Empty(){
//         if(top == -1){
//             cout<<"Stack is Empty"<<endl;
//             return true;
//         }
//         return false;
//     }

//     bool is_Full(){
//         if(top + 1 == size){
//             cout<<"Stack is Full"<<endl;
//             return true;
//         }
//         return false;
//     }

//     void push(int data){
//         if(!is_Full()){
//             arr[++top] = data;
//         }
//     }

//     int pop(){
//         if(!is_Empty()){
//             return arr[top--];
//         }
//         return -1;
//     }

//     int peek(){
//         if(!is_Empty()){
//             return arr[top];
//         }
//         return -1;
//     }

//     void display(){
//         for(int temp = top; temp>=0; temp--){
//             cout<<arr[temp]<<", ";
//         }
//         cout<<endl;
//     }
// };

// Stack stack_rev(Stack st){
//     Stack rev(st.size);
//     while(!st.is_Empty()){
//         rev.push(st.pop());
//     }

//     return rev;

// }

// void PushAtBottom(Stack &st, int data){
//     Stack rev(st.size);
//     while(!st.is_Empty()){
//         rev.push(st.pop());
//     }
//     st.push(data);
//     while(!rev.is_Empty()){
//         st.push(rev.pop());
//     }
// }

// string rev_string(string str){
//     Stack st(str.length());
//     for(int i = 0; i<st.size; i++){
//         st.push((int)str[i]);
//     }
//     string ans = "";
//     while(!st.is_Empty()){
//         ans += (char)st.pop();
//     }

//     return ans;
// }


// void delete_rec(Stack &st, int idx){
//     if(idx == 0){
//         st.pop();
//         return;
//     }
//     int num = st.pop();
//     delete_rec(st, --idx);
//     st.push(num);

// }

// //delete mid element
// void delete_mid(Stack &st){
//     // delete(st, st.size/2); 
    
//     //         or
//     Stack temp(st.size/2);
//     while(!temp.is_Full()){
//         temp.push(st.pop());
//     }
//     st.pop();
//     while(!temp.is_Empty()){
//         st.push(temp.pop());
//     }
// }

// bool ValidParenthesis(string str){
//     int len = str.length();
//     Stack st(len);
//     for(int i = 0; i<len; i++){
//         char temp = str[i];
//         if(temp == '(' || temp == '[' || temp == '{'){
//             st.push(temp);
//         }else if(temp == '}' || temp == ')' || temp == ']'){
//             if(!st.is_Empty() && ((temp == '}' && st.peek() == '{') || (temp == ')' && st.peek() == '(') || (temp == ']' && st.peek() == '['))){
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

// void sort_insert(Stack &st, int num){
//     if(st.is_Empty()){
//         st.push(num);
//         return;
//     }
//     if(st.peek() > num){
//         int temp = st.peek();
//         st.pop();
//         sort_insert(st, num);
//         sort_insert(st, temp);

//     }else{
//         st.push(num);
//     }
// }

// void sort_rec(Stack &st){
//     if(st.is_Empty()) return;
//     int temp = st.peek();
//     st.pop();
//     sort_rec(st);
//     sort_insert(st, temp);

// }

// bool redundantbrackets(string str){
//     Stack st(str.length());
//     for(char ele : str){
//         if(ele == '(' || ele == '+' || ele == '-' || ele == '*' || ele == '/'){
//             st.push(ele);
//         }else if(ele == ')'){
//             bool flag = true;
//             while(st.peek() != '('){
//                 if(st.peek() == '+' || st.peek() == '-' || st.peek() == '*' || st.peek() == '/'){
//                     flag = false;
//                 }
//                 st.pop();
//             }
//             if(flag){
//                 return true;
//             }
//             st.pop();
//         }
//     }
//     return false;
// }

// int findMinimumCost(string str){
//     if(str.length() % 2 != 0) return -1;
//     int cost = 0;
//     Stack st(str.length());
//     for(char ele : str){
//         if(ele == '{'){
//             st.push(ele);
//         }else if(ele == '}'){
//             if(st.is_Empty()){
//                 cost = 1;
//             }
//             if(st.peek() == '{'){
//                 st.pop();
//             }

//         }
//     }
//     return cost;
// }

// // Stack using Queues

// class Stackq{
//     public:
//     queue<int> q;
//     Stackq();
//     void push(int data){
//         q.push(data);
//         int size = q.size();
//         for(int i = 1; i<size; i++){
           
//             q.push(q.front());
//             q.pop();
//         }
//     }
//     int pop(){
//         if(empty()) return -1;
//         int t = q.front();
//         q.pop();
//         return t;
//     }

//     int peek(){
//         if(empty()) return -1;
//         int t = q.front();
//         return t;
//     }
//     bool empty(){
//         return q.empty();
//     }

//     void display(){
//         while(!empty()){
//             cout<<pop()<<", ";
//         }
//         cout<<endl;
//     }
// };


bool is_Operand(char ele){
    return (ele == '+' || ele == '-' || ele == '*' || ele == '/' || ele == '^');
}
bool is_Operator(char ele){
    return (ele == '+' || ele == '-' || ele == '*' || ele == '/' || ele == '^');
}
bool is_Operand(string ele){
    return (ele == "+" || ele == "-" || ele == "*" || ele == "/" || ele == "^");
}
bool is_Operator(string ele){
    return (ele == "+" || ele == "-" || ele == "*" || ele == "/" || ele == "^");
}

int precedence(char ele){
    if(ele == '^') return 3;
    if(ele == '*' || ele == '/') return 2;
    if(ele == '+' || ele == '-') return 1;
    return 0;
}

string infixToPostfix(string s) {
    // Your code here
    stack<char> st;
    string ans = "";
    for(int i = 0; i<s.length(); i++){
        char ele = s[i];
        if((ele >= 'A' && ele <= 'Z') || (ele >= 'a' && ele <= 'z') || (ele >= '0' && ele <= '9')) ans += ele;
        else if(ele == '('){
                st.push(ele);
        }else if(ele == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }else if(is_Operand(ele)){
            while(!st.empty() && precedence(ele) <= precedence(st.top())){
                ans+= st.top();
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
string str_rev_process(string s){
    int low = 0;
    int high = s.length() - 1;
    while(low <= high){
        char temp = s[low];
        s[low] = s[high];
        s[high] = temp;

        if(s[high] == '('){
            s[high] = ')';
        }else if(s[high] == ')'){
            s[high] = '(';
        }
        if(s[low] == '('){
            s[low] = ')';
        }else if(s[low] == ')'){
            s[low] = '(';
        }
        low++;
        high--;
    }
    return s;
}
string infixToPrefix(string s){
    s = str_rev_process(s); //reverse and process...
    stack<char> st;
    string ans = "";
    for(int i = 0; i<s.length(); i++){
        char ele = s[i];
        if((ele >= 'A' && ele <= 'Z') || (ele >= 'a' && ele <= 'z') || (ele >= '0' && ele <= '9')) ans += ele;
        else if(ele == '('){
                st.push(ele);
        }else if(ele == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }else if(ele == '^'){
            while(!st.empty() && precedence(ele) <= precedence(st.top())){ //In the stack-based conversion algorithm, when an operator with equal or lower precedence appears at the top of the stack, we pop operators until we find one with a lower precedence. However, since ^ is right-associative, we must ensure that it is not popped immediately when another ^ appears.
                ans+= st.top();
                st.pop();
            }
            st.push(ele);
        }else{
            while(!st.empty() && precedence(ele) < precedence(st.top())){
                ans+= st.top();
                st.pop();
            }
            st.push(ele);
        }
        
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return str_rev_process(ans);
}

string postToInfix(string exp) {
        // Write your code here
        stack<string> st;
        for(int i = 0; i<exp.length(); i++){
            string ele = "";
            ele += exp[i];
            if(is_Operand(ele)){
                string temp = "";
                temp = st.top();
                st.pop();
                temp = ("("+st.top() + ele +temp+")");
                st.pop();
                st.push(temp);
            }else{
                st.push(ele);
            }
        }
        return st.top();
    }

string rev(string s){
        int low = 0;
        int high = s.length() - 1;
        while(low <= high){
            char temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            low++;
            high--;
        }
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '('){
                s[i] = ')';
            }else if(s[i] == ')'){
                s[i] = '(';
            }
        }
        return s;
    }
string preToInfix(string pre_exp) {
    // Write your code here
    stack<string> st;
    for(int i = pre_exp.length() - 1; i>=0; i--){
        string ele = "";
        ele += pre_exp[i];
        if(is_Operand(ele)){
            string temp = "";
            temp += st.top();
            st.pop();
            temp = "(" + st.top() + ele + temp + ")";
            st.pop();
            st.push(temp);
        }else{
            st.push(ele);
        }
    }
    // cout<<st.top();
    return rev(st.top());
}

string postTopre(string s){
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

string preTopost(string s){
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

vector<int> NGE(vector<int> arr){
    vector<int> res(arr.size());
    stack<int> st;
    for(int i = arr.size() - 1; i>=0; i--){
        while(!st.empty() && arr[i] >= st.top()){
            st.pop();
        }
        if(st.empty()) res[i] = -1;
        else res[i] = st.top();
        st.push(arr[i]);
    }
    return res;
}

int main(){
    // vector<int> q;
    // q.push_back(4);
    // q.push_back(2);
    // q.push_back(1);
    // q.push_back(6);
    // vector<int> res = NGE(q);
    // for(int i = 0; i<res.size(); i++){
    //     cout<<res[i]<<", ";
    // }
    // cout<<infixToPostfix("(a+b)*c");
    cout<<preTopost("/-AB*+DEF");
}