#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
// void f(){
//     cout<<"1";
//     f();
// }
void f(){
    if(cnt==7){
        return ;
    }
    cout<<cnt<<endl;
    cnt++;
    f();
}
int main(){
    f();
}