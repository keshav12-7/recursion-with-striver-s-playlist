# include<bits/stdc++.h>
using namespace std;
void subseq(int i,int n , vector<int>&arr,vector<int>&temp,int k){
    if(i==n){
        int sum =0;
        for(auto it : temp){
            sum+=it;
        }
        if(sum==k){
            for(auto it : temp){
                cout<<it<<" ";
            
            }
            cout<<endl;
        }
        
        return;
    }
    temp.push_back(arr[i]);
    subseq(i+1,n,arr,temp,k);
    temp.pop_back();
    subseq(i+1,n,arr,temp,k);

}
int main(){
    vector<int>arr= {3,1,2,5,4,2};
    vector<int>temp;

    int index =0;
    int n = arr.size();
    subseq(index,n,arr,temp,5);
}