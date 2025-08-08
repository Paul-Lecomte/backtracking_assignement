#include <iostream>
#include <fstream>
#include <unordered_set>
#include "word_ladder.hpp"
#include "maze_solver.hpp"
#include "boggle_solver.hpp"

// Helper to load dictionary from file
std::unordered_set<std::string> loadDictionary(const std::string& filename) {
    std::unordered_set<std::string> dict;
    std::ifstream file(filename);
    std::string word;
    while (file >> word) {
        dict.insert(word);
    }
    return dict;
}

int main() {
    std::cout << "Assignment 4 - Backtracking Problems" << std::endl;

    // Word ladder test
    std::string start = "code";
    std::string end = "data";

    auto dict = loadDictionary("data/dictionary.txt");
    std::vector<std::string> ladder = findWordLadder(start, end, dict);

    // Tu pourras appeler ici chaque fonction de test que tu implémenteras
    return 0;
}