# ECE 231 Week 4 Lab Assignment

This is (mostly) a group assignment except for **Part 1** below. For **Parts 2 and 3** you
**must(\*)** work on this assignment with one other person. This is an opportunity to use and
learn more features in GitHub, specifically Issues and Pull Requests. I want to see
communication between the team members through the use of these features.

## Part 1: Recursion with pointers

In your personal repository for week 3, do the following:
  * Add a new version of your binarysearch algorithm (the one which uses pointers) which uses
  *recursion*. You can call it `binarySearchRecursive` or similiar. Compare it's run time with the
  loop version.
 
  * Add two files `sort.h` and `sort.cpp`. The `sort.h` file should contain the following function
  declaration:
  
        bubblesort(int *begin, const int *end);
        
  * In `sort.cpp` implement the bubble sort algorithm.
    
  * In `runtests.cpp`, add a call to sort the `search` vector by calling your `bubblesort` method.
  Print the entire sorted array to show that it is indeed sorted.

## Part 2: Complex number class

For this you will implement a complex number class as a team.  All functions in the provided
`Complex.h` file must be implemented. The method implementations must be in the `Complex.cpp`
file.

## Part 3: Tests for Complex class

All good code needs **unit tests** to test and confirm that all the code functions as expected. 
The file `runtests.cpp` contains the beginning of a test harness for the `Complex` class. I have
started the file with 3 tests for one of the constructors and for the `norm` function. You must add
**at least 20** more tests to test all aspects of your Complex class to ensure all of the functions
work as expected and return correct results.

## Strategy

After helping each other complete **Part 1**, break up the tasks such that team member 1
implements **Part 2** *while* team member 2 implements **Part 3**. The goal is to try to implement
the tests for the `Complex` class without prior knowledge of the specific implementation of the
class.

## Deliverables and rubric

  1. In your week 3 repository, the modified `binarysearch.cpp`, `sort.h`, `sort.cpp`, and
  modified `runtests.cpp`. **25 points.**
  1. `Complex.cpp` with all of the methods from `Complex.h` implemented.
  1. **At least** 20 additional tests added to `runtests.cpp`. All tests must pass for your `Complex`
  as well as the built in `std::complex<double>` class. **50 points.**
  1. Communication between team members in Issue and Pull requests. **25 points.**
  
