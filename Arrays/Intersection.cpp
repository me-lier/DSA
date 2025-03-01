#include<iostream>
using namespace std;

vector<int> Intersectiondp(vector<int> v1, vector<int> v2){ // Optimal with Duplicates Handling...
    vector<int> res;
    int i = 0, j = 0, a = v1.size(), b = v2.size();
    while(i < a && j < b){
        if((v1[i] == v2[j] && (res.empty() || res.back() != v1[i]))){
            res.push_back(v1[i]);
            i++;
            j++;
        }else if(v1[i] > v2[j]){
            j++;
        }else if(v1[i] < v2[j]){
            i++;
        }
    }
    return res;
}

vector<int> Intersectionbr(vector<int> arr1, vector<int> arr2){
    vector<int> res;
	vector<bool> visited(arr2.size(), false);
	for(int i = 0; i < arr1.size(); i++){
		for(int j = 0; j < arr2.size(); j++){
			if(arr1[i] == arr2[j] && !visited[j]){
				res.push_back(arr1[i]);
				visited[j] = true;
				break;
			}
		}
	}

	return res;
}

vector<int> Intersection(vector<int> v1, vector<int> v2){
    vector<int> res;
    int i = 0, j = 0, a = v1.size(), b = v2.size();
    while(i < a && j < b){
        if(v1[i] == v2[j]){
            res.push_back(v1[i]);
            i++;
            j++;
        }else if(v1[i] > v2[j]){
            j++;
        }else if(v1[i] < v2[j]){
            i++;
        }
    }
    return res;
}

int main(){
    vector<int> v1{1,2,2,3,3,4,5,5,6,7};
    vector<int> v2{5,5,6,7,7,8,9};
    vector<int> u = Intersection(v1,v2);
    for(int ele : u){
        cout<<ele<<", ";
    }
    cout<<endl;
}