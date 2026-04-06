#include <bits/stdc++.h> 
using namespace std;
void f(int index,int n , vector<int>&arr,vector<int>&temp){
    if(index==n){
        if(temp.size()==0){
            cout<<"{}";
        }
        for(auto it : temp){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    // take or pick the particular index into subsequence
    temp.push_back(arr[index]);
    f(index+1,n,arr,temp);

    temp.pop_back();
    // not pick or not take condition , this elelment is not added to your subsequence
    
    f(index+1,n,arr,temp);

}
int main(){
    vector<int>arr = {3,1,2};
    int n =3;
    vector<int>temp;
    f(0,n,arr,temp);
    return 0;
}