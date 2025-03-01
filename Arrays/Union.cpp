#include<iostream>
#include<vector>
using namespace std;

vector<int> Union(vector<int> v1, vector<int> v2){ // self Optimal not that much.......
    int a = v1.size(), b = v2.size();
    int i = 0, j = 0;
    vector<int> res;
    while(i < a && j < b){
        if(v1[i] <= v2[j]){
            res.push_back(v1[i++]);
        }else if(v1[i] > v2[j]){
            res.push_back(v2[j++]);
        }
        while(res.back() == v1[i] && i < a){
            i++;
        }
        while(res.back() == v2[j] && j < b){
            j++;
        }
    }
    while(i < a){
        if(res.back() != v1[i]){
            res.push_back(v1[i]);
        }
        i++;
    }
    while(j < b){
        if(res.back() != v2[j]){
            res.push_back(v2[j]);
        }
        j++;
    }
    return res;
}

vector<int> Union(vector<int> v1, vector<int> v2){ // OPtimal
    int a = v1.size(), b = v2.size(), i = 0, j = 0;
    vector<int> res;
    while(i < a && j < b){
        if(v1[i] <= v2[j]){
            if(res.empty() || res.back() != v1[i]){
                res.push_back(v1[i]);
            }
            i++;
        }else{
            if(res.empty() || res.back() != v2[j]){
                res.push_back(v2[j]);
            }
            j++;
        }
    }
    while(i < a){
        if(res.empty() || res.back() != v1[i]){
            res.push_back(v1[i]);
        }
        i++;
    }
    while(j < b){
        if(res.empty() || res.back() != v2[j]){
            res.push_back(v2[j]);
        }
        j++;
    }
    return res;
}

int main(){
    vector<int> v1{1,2,2,3,3,4,5,6,7};
    vector<int> v2{5,5,6,7,7,8,9};
    vector<int> u = Union(v1,v2);
    for(int ele : u){
        cout<<ele<<", ";
    }
    cout<<endl;
}