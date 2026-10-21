#include<bits/stdc++.h>
using namespace std;
void f(int n){
    if(n<1){
        return;
    }
    cout<<n;
    // f(--n);
    f(n-1);
}
int main(){
    int n = 4;
    f(n);
    return 0;
}