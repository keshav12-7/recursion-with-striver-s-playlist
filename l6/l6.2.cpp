#include<bits/stdc++.h>
using namespace std;
void subseq(int arr[],vector<int>&temp,int i,int n){
    if(i>=n){
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        return;
    }
    temp.push_back(arr[i]);
    subseq(arr,temp,i+1,n);
    temp.pop_back();
    subseq(arr,temp,i+1,n);


}
int main(){
    int arr[]={3,1,2};
    vector<int>temp;

    subseq(arr,temp,0,3);
    return 0;
}