#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <deque>
#include <exception>
#include <iterator>
#include <algorithm>
#include <unistd.h>

class PmergeMe
{
    private:
        std::deque<std::pair<int, int> > dq;
        std::deque<int> d;
        std::vector<std::pair<int, int> > vec;
        std::vector<int> v;
        std::vector<int> jacob;
        int	K;
        int odd;
        static bool compare(std::pair<int, int>  a, std::pair<int, int>  b);
    public:
        PmergeMe();
        ~PmergeMe();
        void createJacob();
        
        void parseVec(std::string str);
        void mergeInsertSortVector();
        void sortPairsVec();
        void execVec(std::string str);
        void printVec();
        
        void parseDeq(std::string str);
        void mergeInsertSortDeq();
        void sortPairsDeq();
        void execDeq(std::string str);
        void printDeq();

};

#endif