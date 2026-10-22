# include<bits/stdc++.h>
using namespace std;
int subseq(int arr[],vector<int>&temp,int i,int n, int sum,int k){
    if(i==n){
        if(sum==k){
            return 1;
        }
        else{
            return 0;
        }
    }
   return (subseq(arr,temp,i+1,n,sum+arr[i],k)+subseq(arr,temp,i+1,n,sum,k));
}
int main(){
    int arr[]={1,2,1,0,-1,3,1};
    vector<int>temp;
    int i=0,n=7,sum = 0, k=3;
    cout<<"no. of subseq with sum " << k << " is : "<<subseq(arr,temp,i,n, sum , k);
    return 0;
}