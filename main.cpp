#include <iostream>
#include <fstream>
#include <unordered_set>
#include <algorithm>
#include "word_ladder.hpp"
#include "maze_solver.hpp"
#include "boggle_solver.hpp"

// ---------------------------------------------------------------------------------------------------------------------
// Dictionary loading function

std::unordered_set<std::string> loadDictionary(const std::string& filename) {
    std::unordered_set<std::string> dict;
    std::ifstream file(filename);
    std::string word;
    while (file >> word) {
        word.erase(remove_if(word.begin(), word.end(), ::isspace), word.end());
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        dict.insert(word);
    }
    return dict;
}

// ---------------------------------------------------------------------------------------------------------------------
// Maze loading function
/*
Maze loadMaze(const std::string& filename) {
    Maze maze;
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        maze.push_back(line);
    }
    return maze;
}
*/
// ---------------------------------------------------------------------------------------------------------------------
int main() {
    // -----------------------------------------------------------------------------------------------------------------
    // Dictionary sovler
    /*
    std::cout << "Assignment 4 - Backtracking Problems" << std::endl;

    std::string start = "gold";
    std::string end = "lead";

    auto dict = loadDictionary("data/dictionary.txt");
    std::cout << "Dictionnaire chargé (" << dict.size() << " mots):" << std::endl;
    std::vector<std::string> ladder = findWordLadder(start, end, dict);

    if (ladder.empty()) {
        std::cout << "No ladder found from " << start << " to " << end << std::endl;
    } else {
        std::cout <<  "Word ladder found: ";
        for (const auto& word : ladder) {
            std::cout << word << " ";
        }
        std::cout << std::endl;
    }
    */
    // -----------------------------------------------------------------------------------------------------------------
    // Maze solver
    /*
    Maze maze = loadMaze("data/sample_maze.txt");

    // Start and end positions (row, col)
    std::pair<int, int> start = {3, 6}; // example: position of 'S'
    std::pair<int, int> end = {9, 11};  // example: some target position

    Path path = solveMaze(maze, start, end);

    if (path.empty()) {
        std::cout << "No path found in the maze." << std::endl;
    } else {
        std::cout << "Path found: ";
        for (auto& [r, c] : path) {
            std::cout << "(" << r << "," << c << ") ";
        }
        std::cout << std::endl;
    }
    */
    // -----------------------------------------------------------------------------------------------------------------

    // -----------------------------------------------------------------------------------------------------------------
    // Boggle solver
    auto dict = loadDictionary("data/dictionary.txt");

    Board board = {
        {'t','e','s','t'},
        {'a','b','c','d'},
        {'e','f','g','h'},
        {'i','j','k','l'}
    };

    auto foundWords = findAllWords(board, dict);



    return 0;
}