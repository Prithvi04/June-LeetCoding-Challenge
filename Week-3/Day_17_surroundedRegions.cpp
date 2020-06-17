class Solution { 

public:
    void DFS(vector<vector<char>> &board,int i,int j,int m,int n)
    {
        if(i>=0 && j>=0 && i<m && j<n && board[i][j]=='O')
        {
            board[i][j]='C';
            DFS(board,i-1,j,m,n);
            DFS(board,i+1,j,m,n);
            DFS(board,i,j-1,m,n);
            DFS(board,i,j+1,m,n);
        }
        else
            return;
    }
        void solve(vector<vector<char>>& board) {
        int m=board.size();
        if(m==0)
            return;
        
        int n=board[0].size();
        
        for(int i=0;i<m;i++)
            if(board[i][0]=='O')
                DFS(board,i,0,m,n);
            
        for(int i=0;i<m;i++)
            if(board[i][n-1]=='O')
                DFS(board,i,n-1,m,n);
        
        for(int i=0;i<n;i++)
            if(board[0][i]=='O')
                DFS(board,0,i,m,n);
            
        for(int i=0;i<n;i++)
            if(board[m-1][i]=='O')
                DFS(board,m-1,i,m,n);
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='C')
                    board[i][j]='O';
                else if(board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        
    }
};
//Uses DFS for connected components of boundry O, and changes interior O with X using nested loops.