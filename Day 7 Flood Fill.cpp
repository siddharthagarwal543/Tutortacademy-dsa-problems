//Question link:https://leetcode.com/problems/flood-fill/
class Solution {TC O(n*m) Sc o(n*m)
public:
    void dfs(vector<vector<int>>& img, int i, int j, int clr, vector<vector<bool>>& visited,int req) {
        if (i < 0 || j < 0 || i >= img.size() || j >= img[0].size() || visited[i][j]||img[i][j]!=req) {
            return;
        }//all undesired cases
        
        visited[i][j] = true;
        img[i][j] = clr;
        dfs(img, i + 1, j, clr, visited,req);//checking for all 4 directional cells
        dfs(img, i - 1, j, clr, visited,req);
        dfs(img, i, j + 1, clr, visited,req);
        dfs(img, i, j - 1, clr, visited,req);
    } 
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if (image.empty() || image[0].empty()) {
            return image;
        }
        
        int rows = image.size();
        int cols = image[0].size();
        
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        
        dfs(image, sr, sc, color,visited,image[sr][sc]);
        
        return image;
    }
};
