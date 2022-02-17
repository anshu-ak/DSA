// https://leetcode.com/problems/rotting-oranges/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size(), n = grid[0].size(), total_oranges = 0, rotten_oranges = 0, minutes = 0;
        queue<pair<int, int>> rotten_queue;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] != 0) total_oranges++;
                if(grid[i][j] == 2) rotten_queue.push({i,j});
            }
        }
        
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        
        while(!rotten_queue.empty()){
            int cnt = rotten_queue.size();
            rotten_oranges += cnt;
            while(cnt--){
                int x = rotten_queue.front().first, y = rotten_queue.front().second;
                rotten_queue.pop();
                for(int k=0; k<4; k++){
                    int nx = x+dx[k], ny = y+dy[k];
                    if(nx<0 || ny<0 || nx>=m || ny >=n || grid[nx][ny]!=1) continue;
                    grid[nx][ny] = 2;
                    rotten_queue.push({nx, ny});
                }
            }
            if(!rotten_queue.empty()) minutes++;
        }
        return total_oranges==rotten_oranges ? minutes : -1;
        
    }
};