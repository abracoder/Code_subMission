class Solution {
    private:
    int effort[105][105];    // Store effort for each cell
    int dx[4] = {0, 1, -1, 0};  // Changes in x coordinate for each direction
    int dy[4] = {1, 0, 0, -1};  // Changes in y coordinate for each direction
    
        // Dijkstra's Algorithm to find minimum effort
    int dijkstra(vector<vector<int>>& heights) {
        int rows = heights.size();
        int cols = heights[0].size();

        // Priority queue to store {effort, {x, y}}
        std::priority_queue<std::pair<int, std::pair<int, int>>> pq;
        pq.push({0, {0, 0}});  // Start from the top-left cell
        effort[0][0] = 0;  // Initial effort at the starting cell

        while (!pq.empty()) {
            auto current = pq.top().second;
            int cost = -pq.top().first;  // Effort for the current cell
            pq.pop();

            int x = current.first;
            int y = current.second;

            // Skip if we've already found a better effort for this cell
            if (cost > effort[x][y])
                continue;

            // Stop if we've reached the bottom-right cell
            if (x == rows - 1 && y == cols - 1)
                return cost;

            // Explore each direction (up, down, left, right)
            for (int i = 0; i < 4; i++) {
                int new_x = x + dx[i];
                int new_y = y + dy[i];

                // Check if the new coordinates are within bounds
                if (new_x < 0 || new_x >= rows || new_y < 0 || new_y >= cols)
                    continue;

                // Calculate new effort for the neighboring cell
                int new_effort = std::max(effort[x][y], std::abs(heights[x][y] - heights[new_x][new_y]));

                // Update effort if a lower effort is found for the neighboring cell
                if (new_effort < effort[new_x][new_y]) {
                    effort[new_x][new_y] = new_effort;
                    pq.push({-new_effort, {new_x, new_y}});
                }
            }
        }
        return effort[rows - 1][cols - 1];  // Minimum effort for the path to the bottom-right cell
    }

    
//     bool isPossible( int newRow, int newCol , int n , int m){
        
//         if( newRow >=0 && newCol >= 0 && newRow < n && newCol < m) 
//             return true;
        
//         return false;
        
//     }
    
//     int solve( int row , int col , vector<vector<int>>& heights , int n , int m, int mini){
        
//         if ( !isPossible(row,col, n, m))
//             return 0;
//         //left call
        
//         int left = INT_MAX, right = INT_MAX, up = INT_MAX, down = INT_MAX;
//         if(isPossible (row , col-1, n, m )){
//             mini = min ( mini ,  abs ( heights[row][col-1] - heights[row][col]));
//             cout << ' mini ' << mini;
//             int left = solve( row, col-1, heights, n, m , mini);
            
//         }
        
        
//         //right
        
//          if(isPossible (row , col+1, n, m )){
//             mini = min ( mini , heights[row][col+1] - heights[row][col]);
//                          cout << ' mini ' << mini;

//             int right = solve( row, col+1, heights, n, m , mini);
            
//         }
//         //up call
//          if(isPossible (row-1 , col, n, m )){
//             mini = min ( mini , heights[row-1][col] - heights[row][col]);
//                          cout << ' mini ' << mini;

//             int up = solve( row-1, col, heights, n, m , mini);
            
//         }
        
        
//         // down call
        
//          if(isPossible (row+1 , col, n, m )){
//             mini = min ( mini , heights[row+1][col] - heights[row][col]);
//                          cout << ' mini ' << mini;

//             int down = solve( row+1, col, heights, n, m , mini);
            
//         }
        
//         return min( left , min(right, min ( up, down)));
        
        
        
        
        
        
        
        
        
    
    
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
       // Initialize effort for each cell to maximum value
        for (int i = 0; i < heights.size(); i++) {
            for (int j = 0; j < heights[i].size(); j++) {
                effort[i][j] = INT_MAX;
            }
        }
        return dijkstra(heights);  // Find minimum effort using dijkstra
    }
        
        

};