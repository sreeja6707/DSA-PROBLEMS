class Solution {
public:
    void markIsland(vector<vector<char>>& grid, int i, int j, int m, int n) {
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        grid[i][j] = '0';  
        
        vector<pair<int, int>> toVisit;
        toVisit.push_back({i, j});
        
        while (!toVisit.empty()) {
            auto [x, y] = toVisit.back();
            toVisit.pop_back();
            
            for (auto& dir : directions) {
                int newX = x + dir[0];
                int newY = y + dir[1];
                
                if (newX >= 0 && newX < m && newY >= 0 && newY < n && grid[newX][newY] == '1') {
                    grid[newX][newY] = '0'; 
                    toVisit.push_back({newX, newY});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;

        int m = grid.size();
        int n = grid[0].size();
        int islandCount = 0;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    markIsland(grid, i, j, m, n);
                    islandCount++;
                }
            }
        }
        
        return islandCount;
    }
};