#include<bits/stdc++.h>
using namespace std;
void sum(int n,int ans){
    if(n<1){
        cout<<"sum is: "<<ans;
        return;
    }
    // ans = ans+n;
    sum(n-1,ans+n);

}
int main(){
    int n = 5;
    int ans =0;

    sum(n,ans);
    return 0;
}