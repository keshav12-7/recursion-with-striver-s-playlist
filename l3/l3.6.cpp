#include <bits/stdc++.h>
using namespace std;
void fact(int i,int ans){
    if(i<1){
        cout<<ans<<endl;
        return;
    }
    fact(i-1,ans*i);
}
int main(){
    int n = 1;
    int ans =1 ;
    fact(3,1);
    return 0;
}