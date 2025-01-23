# Undefined Behavior in C++ with std::vector

This repository demonstrates a common but subtle error in C++ involving accessing vector data after resizing the vector. This leads to undefined behavior, potentially resulting in crashes or seemingly random results.

## The Problem
The `bug.cpp` file contains C++ code that creates a vector, accesses it using a raw pointer, and then resizes it.  This is problematic because resizing a vector may invalidate existing pointers into the vector's data.  The second loop attempts to access elements that are no longer valid after the `push_back(10)` call.

## The Solution
The `bugSolution.cpp` file shows how to avoid this issue by using iterators instead of raw pointers to access vector elements, or by making sure that you always use `vec.data()` to get a pointer after resize operations and to verify its validity.