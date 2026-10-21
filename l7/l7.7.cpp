#include<bits/stdc++.h>
using namespace std;
void subseq_k(int arr[],vector<int>&temp,int i,int n, int sum, int k){
    if(i==n){
        if(sum==k){
            for(int j=0;j<temp.size();j++){
                cout<<temp[j]<<" ";
            }
            cout<<endl;
        }

        return;
    }
    temp.push_back(arr[i]);
    subseq_k(arr,temp,i+1,n,sum+arr[i],k);
    temp.pop_back();
    subseq_k(arr,temp,i+1,n,sum,k);
}
int main(){
    int arr[]={1,2,-1,3,4};
    vector<int>temp;
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0 ;
    int k=3;
    subseq_k(arr,temp,0,n,sum,k);
    return 0;
}