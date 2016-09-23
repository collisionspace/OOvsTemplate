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

    int randomGenerator(int begin, int end);
    string randomString();
};


#endif //SLONEJ3_PROJECT2_RANDOMGENERATION_H

