//
// Created by James Slone on 9/22/16.
//

#ifndef SLONEJ3_PROJECT2_RANDOMGENERATION_H
#define SLONEJ3_PROJECT2_RANDOMGENERATION_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class RandomGeneration {
public:
    RandomGeneration();
    const char cAlphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int randomGenerator(int begin, int end);
    string randomString();
    void randomVector(int size);

};


#endif //SLONEJ3_PROJECT2_RANDOMGENERATION_H

