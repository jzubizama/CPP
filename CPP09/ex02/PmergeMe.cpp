#include "PmergeMe.hpp"

int toInt(const std::string &str)
{
    std::stringstream ss(str);
    int num;
    ss >> num;
    return (num);
}

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseVec(std::string str) {
    std::istringstream iss(str);
    odd = 0;
    while (!odd)
    {
        std::pair <int, int> p;
        if(!(iss >> p.first))
            break;
        v.push_back(p.first);
        if(!(iss >> p.second))
            odd = 1;
        else
            v.push_back(p.second);
        if(p.second < 0 || p.first < 0)
        {
            std::cerr << "Error: arguments must be positive integers" << std::endl;
            throw std::exception();
        }
        vec.push_back(p);
    }
}

void PmergeMe::createJacob(){
    size_t x1 = 0, x2 = 1, jac = 1, aux;

    jacob.push_back(jac);
    do{
        jac = x2 + 2 * x1;
        aux = jac;
        while (aux > x2)
        {
            jacob.push_back(aux);
            aux--;
        }
        x1 = x2;
        x2 = jac;
    } while (jac < vec.size());

}

bool PmergeMe::compare(std::pair<int, int>  a, std::pair<int, int>  b)
{
	return a.first > b.first;
}

void PmergeMe::sortPairsVec(){
    for(std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); it++)
    {
        if (it->first > it->second)
            std::swap(it->first, it->second);
    }
    std::sort(vec.begin(), vec.end(), compare);
    for (unsigned int i = 0; i < vec.size(); i++)
		v.push_back(vec[i].first);
}

void PmergeMe::mergeInsertSortVector(){
    size_t i, j = 0, z;
    K = 1;
    while (j < jacob.size())
    {
        z = 0;
        if (jacob[j] > static_cast<int>(vec.size()))
        {
            j++;
            continue;
        }
        i = jacob[j] - 1;
        while (z < i + K)
        {
            if (vec[i].second >= v[z])
            {
                v.insert(v.begin() + z, vec[i].second);
                K++;
                break;
            }
            z++;
        }
        j++;
    }
    std::reverse(v.begin(), v.end());
    if (odd)
        v.erase(v.begin());
}

void PmergeMe::execVec(std::string str){

    std::cout << "Before: ";
    parseVec(str);
    printVec();
    v.clear();
    double start = clock();
    sortPairsVec();
    createJacob();
    mergeInsertSortVector();

    double end = clock();
	double duration = (end - start) * 1000 / CLOCKS_PER_SEC;

    std::cout << "After:  ";
    printVec();
    std::cout << "Time to process a range of " << v.size() \
	<< " elements with std::vector " << duration << " miliseconds" <<std::endl;
}

void PmergeMe::printVec(){
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::parseDeq(std::string str) {
    std::istringstream iss(str);
    odd = 0;
    while (!odd)
    {
        std::pair <int, int> p;
        if(!(iss >> p.first))
            break;
        d.push_back(p.first);
        if(!(iss >> p.second))
            odd = 1;
        else
            d.push_back(p.second);
        if(p.second < 0 || p.first < 0)
        {
            std::cerr << "Error: arguments must be positive integers" << std::endl;
            throw std::exception();
        }
        dq.push_back(p);
    }
}

void PmergeMe::sortPairsDeq(){
    for(std::deque<std::pair<int, int> >::iterator it = dq.begin(); it != dq.end(); it++)
    {
        if (it->first > it->second)
            std::swap(it->first, it->second);
    }
    std::sort(dq.begin(), dq.end(), compare);
    for (unsigned int i = 0; i < dq.size(); i++)
		d.push_back(dq[i].first);
}

void PmergeMe::mergeInsertSortDeq(){
    size_t i, j = 0, z;
    K = 1;
    while (j < jacob.size())
    {
        z = 0;
        if (jacob[j] > static_cast<int>(dq.size()))
        {
            j++;
            continue;
        }
        i = jacob[j] - 1;
        while (z < i + K)
        {
            if (dq[i].second >= v[z])
            {
                d.insert(d.begin() + z, dq[i].second);
                K++;
                break;
            }
            z++;
        }
        j++;
    }
    std::reverse(d.begin(), d.end());
    if (odd)
        d.erase(d.begin());
}

void PmergeMe::execDeq(std::string str){

    //std::cout << "Before: ";
    parseDeq(str);
    //printDeq();
    d.clear();
    double start = clock();
    sortPairsDeq();
    //createJacob();
    mergeInsertSortDeq();

    double end = clock();
	double duration = (end - start) * 1000 / CLOCKS_PER_SEC;

    //std::cout << "After:  ";
    //printDeq();
    std::cout << "Time to process a range of " << d.size() \
	<< " elements with std::deque " << duration << " miliseconds" <<std::endl;
}

void PmergeMe::printDeq(){
    for (size_t i = 0; i < d.size(); i++)
        std::cout << d[i] << " ";
    std::cout << std::endl;
}
