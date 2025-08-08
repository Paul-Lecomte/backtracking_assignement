#include "word_ladder.hpp"
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>

bool differByOne(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) return false;
    int diffcount = 0;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            diffcount++;
            if (diffcount > 1) return false;
        }
    }
    return diffcount == 1;
}

std::vector<std::string> findWordLadder(const std::string& start, const std::string& end, const std::unordered_set<std::string>& dict) {
    std::queue<std::vector<std::string>> q;
    std::unordered_set<std::string> visited;

    q.push({start});
    visited.insert(start);

    while (!q.empty()) {
        std::vector<std::string> path = q.front();
        q.pop();

        const std::string& lastWord = path.back();

        if (lastWord == end) {
            return path;
        }

        for (const std::string& word : dict) {
            if (differByOne(lastWord, word) && visited.find(word) == visited.end()) {
                std::vector<std::string> newPath = path;
                newPath.push_back(word);
                q.push(newPath);
                visited.insert(word);
            }
        }
    }

    return {};
}