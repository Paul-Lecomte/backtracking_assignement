#pragma once
#include <vector>
#include <string>
#include <unordered_set>

using Board = std::vector<std::vector<char>>;

std::unordered_set<std::string> findAllWords(const Board& board, const std::unordered_set<std::string>& dictionary);
