class Solution {
public:
  void solve(int col,vector<string>&board,int n,vector<int>&leftrow,vector<int>&upperdiagonal,vector<int>&lowerdiagonal,vector<vector<string>>&ans)
  {
    if(col==n) 
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
          if(leftrow[row]==0 && upperdiagonal[row+col]==0 && lowerdiagonal[n-1+col-row]==0)
          {
            board[row][col]='Q';
            leftrow[row]=1;
            upperdiagonal[row+col]=1;
            lowerdiagonal[n-1+col-row]=1;
            solve(col+1,board,n,leftrow,upperdiagonal,lowerdiagonal,ans);
            board[row][col]='.';
            leftrow[row]=0;
            upperdiagonal[row+col]=0;
            lowerdiagonal[n-1+col-row]=0;
          }
    }
  }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        vector<int>leftrow(n,0),upperdiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
        solve(0,board,n,leftrow,upperdiagonal,lowerdiagonal,ans);
        return ans;
    }
};