# CS106B Assignment 4 – Backtracking Algorithms

[![C++](https://img.shields.io/badge/language-C%2B%2B17-blue.svg)](https://en.cppreference.com/w/cpp/17)  
[![Course](https://img.shields.io/badge/course-CS106B%20Stanford-red)](https://web.stanford.edu/class/cs106b/)  
[![Assignment](https://img.shields.io/badge/assignment-Backtracking-yellow)](https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1232/assignments/4-backtracking/)

## Assignment Overview

This assignment is based on **CS106B Assignment 4** from Stanford and focuses on solving problems using **recursive backtracking** and **graph traversal techniques**.

You will:

- Solve the **Word Ladder** problem using **Breadth-First Search (BFS)** to find the shortest transformation sequence between words.
- Implement a **Maze Solver** using **recursive backtracking** to explore all possible paths.
- Build a **Boggle Solver** using **recursive DFS and backtracking** to find all valid words on a Boggle board given a dictionary.

---

## Problems Included

### 1. Word Ladder
- Find the shortest sequence from a start word to an end word, changing only one letter at a time.
- Implemented using **BFS** for efficiency.

### 2. Maze Solver
- Use **recursive backtracking** to explore all paths and determine a valid route from the maze entrance to the exit.

### 3. Boggle Solver
- Use **DFS with backtracking** to generate all possible word paths.
- Validate words using the provided **dictionary** file.

---

## Starter Code

The project structure includes:
- **Header files** under `include/`
- **Source files** under `src/`
- **Sample data** (dictionary and maze) under `data/`
- **CMake build system** for compilation

---

## Compilation and Execution

### Requirements
- **C++17** or later
- **CMake** (for cross-platform building)
- A modern C++ compiler (`g++` or `clang++`)

### Build Instructions
```bash
mkdir build
cd build
cmake ..
make
./Assignment4_Backtracking
```

---

## Sample Data

- `data/dictionary.txt`: A sample English dictionary for testing the Boggle solver.
- `data/sample_maze.txt`: An ASCII maze for validating the Maze Solver.

You can expand the dictionary or provide new maze files to test different scenarios.

---

## Tips for Implementation

- **Backtracking**: Think about when to explore deeper and when to backtrack.
- **BFS for Word Ladder**: Use a `queue` to track word transformations.
- **DFS for Boggle**: Ensure you mark visited letters correctly and unmark them when backtracking.
- **Testing**: Add additional inputs to stress-test your solutions.

---

## Useful Links
- [Assignment Specification](https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1232/assignments/4-backtracking/)
- [C++17 Reference](https://en.cppreference.com/w/cpp/17)

Good luck — this assignment is a great opportunity to deepen your understanding of **recursion**, **backtracking**, and **graph traversal algorithms**!
