#include<bits/stdc++.h>
using namespace std;
bool subseq(int arr[], vector<int>&temp,int i,int n,int k,int sum){
    if(i==n){
        if(sum ==k){
            for(int j=0;j<temp.size();j++){
                cout<<temp[j]<<" ";
            }
            cout<<endl;
            return true;
        }
        else{
            return false;
        }
        
        
    }
    temp.push_back(arr[i]);
    if(subseq(arr,temp,i+1,n,k,sum+arr[i])){
        return true;
    }
    temp.pop_back();
    if(subseq(arr,temp,i+1,n,k,sum)){
        return true;
    }
    return false;
}
int main(){
    int arr[]={1,2,1};
    int sum =0 ;
    int k = -1;
    int i =0;
    vector<int>temp;
    int n = 3;
    if(subseq(arr,temp,i,n,k,sum));
    else{
        cout<<"no such subseq exists";
    }

    return 0;
}