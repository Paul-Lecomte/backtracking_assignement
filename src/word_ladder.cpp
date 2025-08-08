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
}

std::vector<std::string> findWordLadder(const std::string& start, const std::string& end, const std::unordered_set<std::string>& dict) {
    // TODO: Implémenter l’algorithme BFS
    std::queue<std::vector<std::string>> q;
    std::unordered_set<std::string> visited;

    q.push({start});
    visited.insert(start);

    while (!q.empty()) {
        std::vector<std::string> path = q.front();
        q.pop();

        const std::string& lastWord = path.back();

        if (lastWord == end) {
            return path; // Found the shortest ladder
        }

        for (const std::string& word : dict) {
            // TODO: Check if word is valid neighbor and not visited


            if (differByOne(lastWord, word) && visited.find(word) == visited.end()) {
                //Build a new path with the neighbor word
                std::vector<std::string> newPath = path;
                newPath.push_back(word);
                q.push(newPath);
                visited.insert(word);
            }
        }
    }

    return {}; // stub
}
