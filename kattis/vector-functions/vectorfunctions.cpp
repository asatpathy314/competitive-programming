#include "vectorfunctions.h"
#include <climits>

using namespace std;

void backwards(std::vector<int>& vec){
    if (vec.size() < 2) {
        return;
    }
    int i = 0;
    int t = 0;
    int j = vec.size() - 1;
    while (i < j) {
        t = vec[i];
        vec[i] = vec[j];
        vec[j] = t;
        ++i;
        --j;
    }
}

std::vector<int> everyOther(const std::vector<int>& vec){
    vector<int> n;
    for (int i = 0; i < vec.size(); ++i) {
        if (i % 2 == 0) {
            n.push_back(vec[i]);
        }
    }
    return n;
}

int smallest(const std::vector<int>& vec){
    int small = INT_MAX;
    for (int i : vec) {
        if (i < small) {
            small = i;
        }
    }
    return small;
}

int sum(const std::vector<int>& vec){
    int sum = 0;
    for (int i : vec) {
        sum += i;
    }
    return sum;
}

int veryOdd(const std::vector<int>& suchVector){
    int count = 0;
    for (int i = 0; i < suchVector.size(); ++i) {
        if (i % 2 == 1) {
            if (suchVector[i] % 2 == 1) {
                count += 1;
            }
        }
    }
    return count;
}
