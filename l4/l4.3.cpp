#include<bits/stdc++.h>
using namespace std;
void check_palindrome(string s,int n,int i){
    if(i>=n/2){
        cout<<"yes "<<s<<" is palindrome";
        return;
    }
    if(s[i]!=s[n-i]){
        cout<<"no "<<s<<" is not palindrome";
        return;

    }
    check_palindrome(s,n,i+1);

}
int main(){
    string s = "kanak";
    int n=s.size();
    check_palindrome(s,n-1,0);
}
