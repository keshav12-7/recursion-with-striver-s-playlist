#include<bits/stdc++.h>
using namespace std;
bool isSafe(int row, int col,vector<string>&board,int n){
    int duprow=row;
    int dupcol = col;

    // check for upper digonal up left

    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            
            return false;
        }
        row--;
        col--;
    }
    col=dupcol;
    row=duprow;

    // check for left 

    while(col>=0){
        if(board[row][col]=='Q'){
            return false;
            
        }
        col--;
    }
    col= dupcol;
    // check for down digonal

    while(row<n && col>=0){
        if(board[row][col]=='Q'){
            return false;

        }
        row++;
        col--;
    }
    return true;

}
void queen(int n, vector<string>&board,vector<vector<string>>&ans,int col){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            queen(n,board,ans,col+1);
            board[row][col]='.';
            
        }

    }
}
int main(){
    int n =4;
    vector<string>board(n);
    vector<vector<string>>ans;
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    queen(n,board,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}