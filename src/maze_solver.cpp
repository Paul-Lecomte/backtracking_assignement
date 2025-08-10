#include "maze_solver.hpp"
#include <vector>

// Helper function for recursion
bool backtrack(const Maze& maze,
               std::pair<int,int> current,      // where we are now
               std::pair<int,int> end,          // goal coordinates
               std::vector<std::vector<bool>>& visited, // visited tracker
               Path& path) {
    int r = current.first; // current row
    int c = current.second; // current column

    // We will check if we are outside the maze bounds if not we return false
    if (r < 0 || r >= maze.size() || c < 0 || c >= maze[0].size()) {
        return false;
    }

    // We allow space, 'S', and 'E' — everything else is a wall
    if (maze[r][r] != '' && maze[r][c] != 'S' && maze[r][c] != 'E') {
        return false;
    }

    // We check if we have already visited this cell
    if (maze[r][c] == 'S') {
        return false;
    }

    // We mark the cell as visited
    visited[r][c] = true;

    // Add the current position to the path
    path.push_back(current);

    // Check if we have reached the end
    if (current == end) {
        return true;
    }

    // Explore all four directions: up, down, left, right
    static const std::pair<int, int> directions[] = {
        {-1, 0}, // up
        {0, 1}, // right
        {1, 0}, // down
        {0, -1} // left
    };

    // Iterate through each direction and return true if any path leads to the end
    for (auto [dr, dc] : directions) {
        std::pair<int, int> next = { r +dr, c + dc };
        if (backtrack(maze, next, end, visited, path)) {
            return true;
        }
    }

    // If no directions worked, we remove the current position from the path
    path.pop_back();
    return false;
}

Path solveMaze(const Maze& maze, std::pair<int, int> start, std::pair<int, int> end) {
    // TODO: Backtracking récursif pour trouver un chemin

    // Where we will store the solution (path)
    Path path;

    // visited[r][c] will be true if the cell (r, c) has been visited
    std::vector<std::vector<bool>> visited(maze.size(), std::vector<bool>(maze[0].size(), false));

    // Start the recursive search
    backtrack(maze, start, end, visited, path);

    return path; // stub
}
