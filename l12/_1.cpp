#include<bits/stdc++.h>
using namespace std;
void soln(int arr[],map<int,int>&mp,vector<int>&ds,vector<vector<int>>&ans){
    if(ds.size()==3){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<3;i++){
        if(mp[i]==0){
            ds.push_back(arr[i]);
            mp[i]=1;
            soln(arr,mp,ds,ans);
            ds.pop_back();
            mp[i]=0;
        }
        
    }
}
int main(){

    int arr[]={1,2,3};
    map<int,int>mp;
    vector<int>ds;
    vector<vector<int>>ans;
    soln(arr,mp,ds,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

    }


    return 0;
}