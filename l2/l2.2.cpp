#include <bits/stdc++.h>
using namespace std;
// void f(int i,int n){
//     if(i<1){
//         return ;
//     }
//     f(i-1,n);
//     cout<<i<<endl;
// }

void f(int i,int n){
    if(i>n){
        return;
    }
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    // int n =5;
    // f(n,n);
    int n=5;
    f(1,n);


    return 0;

}