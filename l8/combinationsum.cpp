#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp, int i,int n, int target){

    if(target== 0){
        ans.push_back(temp);
        return;
    }
    if(i==n || target<0){
        return;
    }

    // pick multiple times 

    temp.push_back(arr[i]);
    solve(arr,ans,temp,i,n,target-arr[i]);


    //  pick another element

    temp.pop_back();
    solve(arr,ans,temp,i+1,n,target);
}
int main(){
    vector<int>arr={2,3,5,4,2,1};
    vector<vector<int>>ans;
    vector<int>temp;
    int i=0,n=arr.size(),target =5;
    solve(arr,ans,temp,i,n,target);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}