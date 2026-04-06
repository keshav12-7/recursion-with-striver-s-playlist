#include<bits/stdc++.h>
using namespace std;
int subseq(vector<int>arr,int i,int n,int k,int sum){
    if(i==n){
        if(sum==k){
            return 1;
        }
        else{
            return 0;
        }   
    }  
    sum+=arr[i];
    int left = subseq(arr,i+1,n,k,sum);
    sum-=arr[i];
    int right = subseq(arr,i+1,n,k,sum);  
    return left+right; 
}
int main(){
    vector<int>arr = {1,2,1};
    // vector<int>temp;
    int i=0,n=arr.size(),k=3,sum =0;
    
    cout<<subseq(arr,i,n,k,sum);
   
    return 0;
}