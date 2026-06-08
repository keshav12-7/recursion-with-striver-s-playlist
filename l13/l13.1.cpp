#include<bits/stdc++.h>
using namespace std;
void permute(vector<int>&arr,int ind,int n,vector<vector<int>>&ans){
    if(ind==n){
        ans.push_back(arr);
        return ;
    }
    for(int i=ind;i<3;i++){
         swap(arr[i],arr[ind]);
         permute(arr,ind+1,n,ans);
         swap(arr[i],arr[ind]);

    }
}
int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    permute(arr,0,3,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}