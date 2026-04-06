#include<bits/stdc++.h>
using namespace std;
void reverse_arr(int arr[],int size,int i){
    if(i>=size){
        return;
    }
    swap(arr[i],arr[size]);
    reverse_arr(arr,size-1,i+1);


}
int main(){
    int arr[]={1,2,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse_arr(arr,n-1,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}