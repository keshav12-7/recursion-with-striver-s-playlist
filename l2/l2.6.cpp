#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i>n){
        return;
    }
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n=4;
    f(1,n);
    return 0;

}