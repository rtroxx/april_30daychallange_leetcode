class Solution{
    public:


vector< vector<int> > vis;
int n, m;

void dfs(vector<vector<char>>& grid, int i, int j)
{
    vis[i][j] = 1;
    
    if((i-1) >= 0 && grid[i-1][j] == '1' && !vis[i-1][j])
        dfs(grid, i-1,j);
    
    if((j-1) >= 0 && grid[i][j-1] == '1' && !vis[i][j-1])
        dfs(grid, i, j-1);

    if((i+1) < n && grid[i+1][j] == '1' && !vis[i+1][j])
        dfs(grid, i+1,j);

    if((j+1) < m && grid[i][j+1] == '1' && !vis[i][j+1])
        dfs(grid, i, j+1);
        
}

int numIslands(vector<vector<char>>& grid) {
    n = grid.size();
    if(n == 0)
        return 0;
    m = grid[0].size();
    int connected_comp = 0;           
    
    for(int i = 0; i < n; i++)
        vis.push_back( vector<int> (m,0));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if( grid[i][j] == '1' && !vis[i][j] )
            {
                connected_comp++;
                dfs(grid,i,j);
            }
        }
    }
    
    return connected_comp;   
}
};
