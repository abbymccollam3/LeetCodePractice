class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // need to use a bfs 
        int rows = grid.size();
        int cols = grid[0].size();
        int freshOranges = 0;
        int minutes = 0;

        queue<pair<int,int>> q;
        vector<pair<int, int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

        // initialize queue with all rotten oranges and count fresh oranges
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                // if there is a rotten orange
                if (grid[r][c] == 2) { // check if there is a rotten orange
                    q.push({r,c}); // add rotten orange to queue
                }
                else if (grid[r][c] == 1) {
                    freshOranges++; // increment fresh oranges
                }
            }
        }

        // Peform bfs to rot adjacent oranges
        while (!q.empty() && freshOranges > 0) {
            int levelSize = q.size(); // number of rotten oranges in that minute
            bool rottedAtThisMinute = false; 

            // traversing through level
            for (int i = 0; i < levelSize; i++) {
                auto[row, col] = q.front(); // start with first rotten orange
                q.pop();
                
                for (auto[dr,dc]:directions) {
                    int nr = row + dr; // new row
                    int nc = col + dc; // new col

                    // if nr and nc are in bounds and there is a fresh orange
                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                        // change to rotten orange
                        // decrement fresh orange
                        // add rotten orange to queue
                         grid[nr][nc] = 2;
                         q.push({nr,nc});
                         freshOranges--;
                        // do something with the minutes
                        rottedAtThisMinute = true;
                    }
                }
            }
            // increment minutes if at least one orange rotted
            if (rottedAtThisMinute)
                minutes++;
        }

        // if all fresh oranges have been rotted (freshOranges == 0)
        // return amount of minutes, if not, return -1
        return freshOranges == 0 ? minutes : -1;
    }
};
