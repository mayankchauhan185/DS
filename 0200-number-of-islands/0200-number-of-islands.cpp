class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                if(grid[i][j] == '1')
                {
                    traverse(grid,i,j);
                    count++;
                }
            }
        }
        
        
        return count;
    }
    void traverse(vector<vector<char>>& grid,int i,int j){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
            return;
        
        if(grid[i][j]=='0')
            return;
        
        grid[i][j]='0';   
        
        traverse(grid,i+1,j);
         traverse(grid,i-1,j);
         traverse(grid,i,j+1);
         traverse(grid,i,j-1);
    }
};