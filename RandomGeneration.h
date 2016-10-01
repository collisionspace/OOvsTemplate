//
// Created by James Slone on 9/22/16.
//

#ifndef SLONEJ3_PROJECT2_RANDOMGENERATION_H
#define SLONEJ3_PROJECT2_RANDOMGENERATION_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "IntWrapper.h"
#include "StringWrapper.h"
using namespace std;

class RandomGeneration {
public:
    RandomGeneration();
    const char cAlphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int randomGenerator(int begin, int end);
    string randomString();
    vector<IComparable*> randomStringVector(int size);
    vector<IComparable*> randomIntVector(int size);
};


#endif //SLONEJ3_PROJECT2_RANDOMGENERATION_H

