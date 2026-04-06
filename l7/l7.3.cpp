# include<bits/stdc++.h>
using namespace std;
void subseq(int arr[],vector<int>&temp,int n, int k,int i,int sum){    

    if(i==n){
        if(sum==k){
            for(int i=0;i<temp.size();i++){
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
        return ;
    }

    temp.push_back(arr[i]);
    sum+=arr[i];

    subseq(arr,temp,n,k,i+1,sum);
    temp.pop_back();
    sum-=arr[i];
    subseq(arr,temp,n,k,i+1,sum);
}
int main(){
    // int arr[]={-1,-3,-2,1,4,5};
    int arr[]={1,2,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int>temp;
    int k =3;
    int i =0;
    int sum =0;
    subseq(arr,temp,n,k,i,sum);

    


}