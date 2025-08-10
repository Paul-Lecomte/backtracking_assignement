#include "maze_solver.hpp"
#include <vector>

// Helper function for recursion
bool backtrack(const Maze& maze,
               std::pair<int,int> current,      // where we are now
               std::pair<int,int> end,          // goal coordinates
               std::vector<std::vector<bool>>& visited, // visited tracker
               Path& path) {

}

Path solveMaze(const Maze& maze, std::pair<int, int> start, std::pair<int, int> end) {
    // TODO: Backtracking récursif pour trouver un chemin
    return {}; // stub
}
