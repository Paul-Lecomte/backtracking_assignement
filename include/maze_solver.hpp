#pragma once
#include <vector>
#include <string>

using Maze = std::vector<std::string>;
using Path = std::vector<std::pair<int, int>>;

Path solveMaze(const Maze& maze, std::pair<int, int> start, std::pair<int, int> end);
