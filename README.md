
# Havel-Hakimi Algorithm Implemention

Implementation of the Havel-Hakimi Algorithm for graph realization in C++

## What is the Havel-Hakimi Theorem/Algorithm?

From [Wikipedia](https://en.wikipedia.org/wiki/Havel%E2%80%93Hakimi_algorithm): "The Havel–Hakimi algorithm is an algorithm in graph theory solving the graph realization problem. That is, it answers the following question: Given a finite list of nonnegative integers in non-increasing order, is there a simple graph(a graph containing no double edges or loops) such that its degree sequence is exactly this list?"

This can be accomplished through processing the inputs as follows:

1. Sort the sequence in non-increasing(descending) order 
3. Remove all 0's or negatives from the sequence.
    - If sequence is now empty stop and return true.
4. Pop the first/largest number and save it as N. 
5. If N is greater than the length of this new sequence of original size -1, stop and return false.
6. Decrement each of the first N elements of the new sequence by 1.
7. Repeat steps 1-6 till an answer is found. 


## Usage

- First compile using the included Makefile by entering ```make``` into the command line. *Make sure you are in the right directory!*
- Next run the program by entering ```./havel_hakimi``` into the command line, testing inputs are already present in main.cpp so no input is required

## Sample Output


## Credits

Inspired by this [post](https://old.reddit.com/r/dailyprogrammer/comments/bqy1cf/20190520_challenge_378_easy_the_havelhakimi/) by u/ Cosmologicon on r/dailyprogrammer
