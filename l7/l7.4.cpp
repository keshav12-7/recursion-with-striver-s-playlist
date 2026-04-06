#include<bits/stdc++.h>
using namespace std;
bool subseq(vector<int>arr,vector<int>&temp,int i,int n,int k,int sum){
    if(i==n){
    
        if(sum==k){
            for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
            }
            return true;
        }
        else{
            cout<<"this subseq is not valid"<<endl;
            return false;
        }
       
    }
    temp.push_back(arr[i]);
    sum+=arr[i];
    
    if(subseq(arr,temp,i+1,n,k,sum)==true){
        return true;
    }

    
    sum-=arr[i];
    temp.pop_back();
    
    if(subseq(arr,temp,i+1,n,k,sum)==true){
        return true;
    }
    else{
        cout<<"none of any subsequence found in this array"<<endl;
        return false;
    }
    
}
int main(){
    vector<int>arr = {1,2,1};
    vector<int>temp;
    int i=0,n=arr.size(),k=3,sum =0;

    subseq(arr,temp,i,n,k,sum);
    return 0;
}