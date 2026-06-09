#include<bits/stdc++.h>
using namespace std;

void solve(int n,vector<vector<string>>&ans,vector<string>&board,int col,map<int,bool>&mpleft,map<int,bool>&mpupward, map<int,bool>&mpdown){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(!mpleft[row] &&!mpdown[row+col] && !mpupward[n-1+col-row]){

            board[row][col]='Q';
            mpleft[row]=true;
            mpdown[row+col]=true;
            
            mpupward[n-1+col-row]=true;
            solve(n,ans,board,col+1,mpleft,mpupward,mpdown);
            board[row][col]='.';
             mpleft[row]=false;
            mpdown[row+col]=false;
             
            mpupward[n-1+col-row]=false;
        }

    }

}
int main(){
    int n;
    cout<<"give size of board";
    cin>>n;

    vector<string>board;
    vector<vector<string>>ans;
    
    string s(n,'.');
    for(int i=0;i<n;i++){
        board.push_back(s);
    }
    int col=0;
    map<int,bool>mpleft;
    map<int,bool>mpupward;
    map<int,bool>mpdown;
    solve(n,ans,board,col,mpleft,mpupward,mpdown);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}