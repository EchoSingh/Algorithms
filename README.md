# Algorithms 

Welcome to the Algorithms ! This project contains implementations of various algorithms in C++.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Algorithms Implemented](#algorithms-implemented)
- [Getting Started](#getting-started)
- [How to Contribute](#how-to-contribute)
- [License](#license)

## Introduction

This repository contains a collection of algorithm implementations in C++. The goal of this project is to provide clear and efficient implementations of common algorithms used in computer science.

## Project Structure

The project is organized as follows:
```
.
├── .gitattributes
├── .gitignore
├── Algorithms.sln
├── Algorithms.vcxproj
├── Algorithms.vcxproj.filters
├── BinarySearch.cpp
├── Fibonacci.cpp
├── LinearSearch.cpp
├── binarysearch.h
├── linearsearch.h
└── main.cpp
```

- `.gitattributes` and `.gitignore`: Configuration files for git.
- `Algorithms.sln`: Solution file for the project.
- `Algorithms.vcxproj` and `Algorithms.vcxproj.filters`: Project files.
- `BinarySearch.cpp` and `binarysearch.h`: Implementation and header files for the Binary Search algorithm.
- `Fibonacci.cpp`: Implementation of the Fibonacci sequence algorithm.
- `LinearSearch.cpp` and `linearsearch.h`: Implementation and header files for the Linear Search algorithm.
- `main.cpp`: The main file to run and test the algorithms.

## Algorithms Implemented

1. **Binary Search**
   - `BinarySearch.cpp`
   - `binarysearch.h`
   - Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item until you've narrowed down the possible locations to just one.

2. **Fibonacci Sequence**
   - `Fibonacci.cpp`
   - This algorithm generates the Fibonacci sequence, where each number is the sum of the two preceding ones, starting from 0 and 1.

3. **Linear Search**
   - `LinearSearch.cpp`
   - `linearsearch.h`
   - Linear search is a simple algorithm that checks every element in the list until the target value is found or the list ends.

## Getting Started

### Prerequisites

To run this project, you need:

- A C++ compiler (e.g., g++, clang)

### Building and Running

1. Clone the repository:

   ```bash
   git clone https://github.com/EchoSingh/algorithms.git
   cd algorithms
   ```
2. Compile the code:

   ```bash
   g++ -o algorithms main.cpp BinarySearch.cpp Fibonacci.cpp LinearSearch.cpp
   ```
3. Run the executable:

   ```bash
   ./algorithms
   ```
### License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/aditya26062003/Algorithms/blob/master/LICENSE) file for details.
