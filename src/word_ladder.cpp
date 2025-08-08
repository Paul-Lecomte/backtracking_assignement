#include "word_ladder.hpp"
#include <queue>
#include <unordered_map>

// helper function for findWordLadder
bool differByOne(const std::string& a, const std::string& b) {
    int diffcount = 0;
    for (size_t i = 0; i< a.size(); i++) {
        if (a[i] != b[i]) {
            diffcount++;
            if (diffcount > 1) return false; // More than one character differs
        }
    }
    return diffcount == 1;
};

std::vector<std::string> findWordLadder(const std::string& start, const std::string& end, const std::unordered_set<std::string>& dict) {
    // TODO: Implémenter l’algorithme BFS

    return {}; // stub
}
