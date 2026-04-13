#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,vector<int>&temp,int i,set<vector<int>>&s){
    if(i==arr.size()){
        if(temp.size()==0){
            temp.push_back(-1);
        }
        s.insert(temp);
        return;
    }
    temp.push_back(arr[i]);
    solve(arr,temp,i+1,s);
    temp.pop_back();
    solve(arr,temp,i+1,s);
}
int main(){
    vector<int>arr={1,2,2};
    vector<int>temp;
    int i=0;
    set<vector<int>>s;
    
    solve(arr,temp,i,s);
    for(auto x : s){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>>ans;
    for(auto x : s){
        ans.push_back(x);
    }
    cout<<"vector"<<endl;
    for(auto x : ans){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}