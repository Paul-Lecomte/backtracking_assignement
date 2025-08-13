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

    inline bool inBounds(int r, int c, int rows, int cols) {
        return r >= 0 && r < rows && c >= 0 && c < cols;
    }

    void dfs(const Board& board, int r, int c, std::string& current,
             std::vector<std::vector<bool>>& visited,
             const std::unordered_set<std::string>& dictionary,
             const std::unordered_set<std::string>& prefixes,
             std::unordered_set<std::string>& found) {

        const int rows = static_cast<int>(board.size());
        const int cols = static_cast<int>(board[0].size());

        // Add current letter
        current.push_back(static_cast<char>(std::tolower(board[r][c])));

        // If current prefix is not valid, stop exploring
        if (!prefixes.count(current)) {
            current.pop_back();
            return;
        }

        // If this forms a valid word, store it
        if (current.size() >= MIN_WORD_LEN && dictionary.count(current)) {
            found.insert(current);
        }

        // mark the cell as visited
        visited[r][c] = true;

        // Explore all 8 possible directions
        static const std::array<std::pair<int,int>, 8> dirs {{
            {-1,-1},{-1,0},{-1,1},
            {0,-1},        {0,1},
            {1,-1}, {1,0}, {1,1}
            }};
        for (auto [dr, dc] : dirs) {
            int nr = r + dr;
            int nc = c + dc;
            if (inBounds(nr , nc, rows, cols) && !visited[nr][nc]) {
                dfs(board, nr, nc, current, visited, dictionary, prefixes, found);
            }
        }

        // Backtrack: unmark visited and remove last letter
        visited[r][c] = false;
        current.pop_back();
    }
}

std::unordered_set<std::string> findAllWords(const Board& board, const std::unordered_set<std::string>& dictionary) {
    // TODO: DFS + backtracking

    std::unordered_set<std::string> found;
    auto prefixes = buildPrefixSet(dictionary);
    const int rows = static_cast<int>(board.size());
    const int cols = static_cast<int>(board[0].size());

    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols, false));
    std::string current;

    for (int r = o; r < rows; ++r) {

    }

    return {}; // stub
}
