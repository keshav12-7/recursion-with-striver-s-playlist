#include<bits/stdc++.h>
using namespace std;
void fact(int n,int ans){
    if(n<=1){
        cout<<"factorial is : "<<ans;
        return;
    }
    fact(n-1,ans*n);

}
int main(){
    int n = 6;
    int ans =1;
    fact(n,ans);
    return 0;
}