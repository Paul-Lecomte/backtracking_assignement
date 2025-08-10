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


}

Path solveMaze(const Maze& maze, std::pair<int, int> start, std::pair<int, int> end) {
    // TODO: Backtracking récursif pour trouver un chemin
    return {}; // stub
}
