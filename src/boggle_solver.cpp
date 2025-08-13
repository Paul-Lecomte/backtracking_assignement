#include "boggle_solver.hpp"
#include <array>
#include <cctype>
#include <string>

namespace {
    constexpr int MIN_WORD_LEN = 3;

    // Build a set of all possible prefixes inn the dictionary
    std::unordered_set<std::string> buildPrefixSet(const std::unordered_set<std::string>& dict) {
        std::unordered_set<std::string> prefixes;
        for (const auto& word : dict) {
            for (size_t len = 1; len <= word.size(); ++len) {
                prefixes.insert(word.substr(0, len));
            }
        }
        return prefixes;
    }
}

std::unordered_set<std::string> findAllWords(const Board& board, const std::unordered_set<std::string>& dictionary) {
    // TODO: DFS + backtracking
    return {}; // stub
}
