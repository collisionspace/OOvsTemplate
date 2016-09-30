//
// Created by James Slone on 9/29/16.
//

#include "Sort.h"
#include "IntComparison.h"

//dynamic cast
vector<IComparable*> Sort::sortInt(vector<IComparable*> randomVector) {
    if(randomVector.size() > 1) {
        for (size_t i = 1; i < randomVector.size(); i++) {
            IntComparison *temp = dynamic_cast<IntComparison *>(randomVector[i]);
            size_t current = i;
            while (current > 0 && temp < randomVector[current - 1]) {
                randomVector[current] = randomVector[current - 1];
                --current;
            }
        }
    }
    return randomVector;
}