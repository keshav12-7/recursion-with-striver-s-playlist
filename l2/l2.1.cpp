# include<bits/stdc++.h>
using namespace std;
// void print(int n){
//     if(n==0){
//         return;

//     }
//     cout<<"name"<<endl;
//     print(n-1);
// }

// void print(int i, int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<endl;
//     print(i+1,n);
// }
void print(int n){
    if(n==0){
        return;
    }
    cout<<n;
    print(n-1);
}
int main(){
    int n =5;
    print(n);
    return 0;

}