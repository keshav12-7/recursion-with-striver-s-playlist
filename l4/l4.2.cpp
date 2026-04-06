#include<bits/stdc++.h>
using namespace std; 
void reverse_arr(int i,int n,int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_arr(i+1,n,arr);
}
int main(){
    int arr[]={1,2,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
     reverse_arr(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}