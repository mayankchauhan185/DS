class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int i,int j,int row, int col,int prevcolor,int newcolor){
        
        
        if(i<0 || i>row || j<0 || j>col || image[i][j]!=prevcolor)
            return;
           
           
        image[i][j] = newcolor;
        
        dfs(image,i-1,j,row,col,prevcolor,newcolor);
        dfs(image,i+1,j,row,col,prevcolor,newcolor);
        dfs(image,i,j-1,row,col,prevcolor,newcolor);
       dfs(image,i,j+1,row,col,prevcolor,newcolor);



    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        
        if(image[sr][sc]==color)
            return image;
        
        if(image[sr][sc] != color){
            dfs(image,sr,sc,image.size()-1,image[0].size()-1,image[sr][sc],color);
    }
    
        return image;
                
    }
};