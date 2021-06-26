// Anish Sundaram / anishsun
// havel_hakimi.cpp
#include "havel_hakimi.h"
#include <iostream>
#include <algorithm>
#include <deque>

void havel_hakimi(std::deque<int>& hh){
    if(hh.empty()){
        std::cout << "true" << '\n';
        return;
    }
    while(!hh.empty()){
        for(int i = 0 ; i < hh.size();++i){
            if(hh[i] == 0){
                hh.erase(hh.begin()+i);
                --i;
            }
        }
        std::sort(hh.begin(),hh.end(), std::greater<int>());
        if(hh.empty()){
            std::cout << "true" << '\n';
            return;
        }
        
        int N = hh.front();
        hh.pop_front();
        if(N > hh.size()){
            std::cout << "false"<< '\n';
            return;
        }
        
        for(int j = 0; j < N; ++j){
            --hh[j];
        }
    }
    std::cout << "false"<< '\n';
}
 

