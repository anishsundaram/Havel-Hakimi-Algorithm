
# Havel-Hakimi Algorithm Implemention

Implementation of the Havel-Hakimi Algorithm for graph realization in C++

## What is the Havel-Hakimi Theorem/Algorithm?

From [Wikipedia](https://en.wikipedia.org/wiki/Havel%E2%80%93Hakimi_algorithm): "The Havel–Hakimi algorithm is an algorithm in graph theory solving the graph realization problem. That is, it answers the following question: Given a finite list of nonnegative integers in non-increasing order, is there a simple graph (a graph containing no double edges or loops) such that its degree sequence is exactly this list?"

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

Let input be ```{6,3,3,3,3,2,2,2,2,1,1}```, a nonnegative, non-increasing list.

Since this is already sorted we can skip that step on the initial pass.

First, we remove the vertex with the highest degree in this case, 6, and all its incident edges to get ```{2 , 2 , 2 , 2 , 1 , 1 , 2 , 2 , 1 , 1}```. This is done by decrementing the first 6 vertices because of their connection with the first vertex.

We sort this sequence in non-increasing/decreasing order to get ```{2 , 2 , 2 , 2 , 2 , 2 , 1 , 1 , 1 , 1}```. 

We repeat the proces and remove the vertex with the next highest degree to get ```{1 , 1 , 2 , 2 , 2 , 1 , 1 , 1 , 1}``` and sorting to get ```{2 , 2 , 2 , 1 , 1 , 1 , 1 , 1 , 1}```. 

We continue the process and decrement the first 2 vertices to get ```{1 , 1 , 1 , 1 , 1 , 1 , 1 , 1}``` and then ```{0 , 0 , 0 , 0 , 0 , 0 , 0 , 0}```. 

This result certifies that the input sequence is graphic, as we are left with a simple graph of 8 isolated vertices. Thus our output would be a boolean ```True```.

## Credits

Inspired by this [post](https://old.reddit.com/r/dailyprogrammer/comments/bqy1cf/20190520_challenge_378_easy_the_havelhakimi/) by u/ Cosmologicon on r/dailyprogrammer
