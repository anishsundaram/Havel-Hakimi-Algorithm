// Anish Sundaram / anishsun
// main.cpp

#include "xcode_redirect.hpp"
#include "havel_hakimi.h"
#include <deque>
#include <vector>
#include <unordered_map>
#include <iostream>


using namespace std;

int main(){
    deque<int> temp = {6,3,3,3,3,2,2,2,2,1,1};
    havel_hakimi(temp);
    temp = {4, 2, 0, 1, 5, 0};
    havel_hakimi(temp);
    temp = {3, 1, 2, 3, 1, 0};
    havel_hakimi(temp);
    temp = {16, 9, 9, 15, 9, 7, 9, 11, 17, 11, 4, 9, 12, 14, 14, 12, 17, 0, 3, 16};
    havel_hakimi(temp);
    temp = {14, 10, 17, 13, 4, 8, 6, 7, 13, 13, 17, 18, 8, 17, 2, 14, 6, 4, 7, 12};
    havel_hakimi(temp);
    temp = {15, 18, 6, 13, 12, 4, 4, 14, 1, 6, 18, 2, 6, 16, 0, 9, 10, 7, 12, 3};
    havel_hakimi(temp);
    temp = {6, 0, 10, 10, 10, 5, 8, 3, 0, 14, 16, 2, 13, 1, 2, 13, 6, 15, 5, 1};
    havel_hakimi(temp);
    temp = {2, 2, 0};
    havel_hakimi(temp);
    temp = {3, 2, 1};
    havel_hakimi(temp);
    temp = {1, 1};
    havel_hakimi(temp);
    temp = {1};
    havel_hakimi(temp);
    temp ={};
    havel_hakimi(temp);
    
    return 0;
}

