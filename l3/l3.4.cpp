#include<bits/stdc++.h>
using namespace std;
void f(int i,int sum);
int main(){
    int n = 10;
    f(n,0);
    return 0;
}
void f(int i,int sum){
    if(i<1){
        cout<<"sum of nos are "<<sum;
        return;
    }
    f(i-1,sum+i);
}