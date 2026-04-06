#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,3,1};
    int n= arr.size();
    // cout<<(1<<n);
    int subsets_cnt= 1<<n;
    vector<vector<int>>ans;

    for(int num = 0;num<subsets_cnt;num++){
        // vector<int>temp;
        int sum =0;
        for(int i=0;i<n;i++){
            if(num&(1<<i)){
                // temp.push_back(arr[i]);
                sum+=arr[i];

            }
        }
        cout<<sum<<endl;
        
    }
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}