#include<bits/stdc++.h>
using namespace std;
void swaps(int &a,int &b){
    int temp = a; 
    a=b;
    b=temp;
}
void rev(int arr[],int n,int i){
    if(i>=n){
        return;
    }
    swaps(arr[i],arr[n]);
    rev(arr,n-1,i+1);


}
int main(){
    int arr[]={-4,3,2,8,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    rev(arr,size-1,0);
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5];

    return 0;
}