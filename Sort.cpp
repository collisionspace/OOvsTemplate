//
// Created by James Slone on 9/29/16.
//

#include "Sort.h"
#include "IntWrapper.h"
#include "StringWrapper.h"
#include <time.h>
#include <iostream>

//dynamic cast
vector<IComparable*> Sort::sortInt(vector<IComparable*> randomVector) {
    //time start
    clock_t t = clock();
    if(randomVector.size() > 1) {
        for (int i = 1; i < randomVector.size(); ++i) {
            IntWrapper *temp = dynamic_cast<IntWrapper *>(randomVector[i]);
            int current = i;
            while (current > 0 && temp->isLessThan(randomVector[current - 1])) {
                randomVector[current] = randomVector[current - 1];
                --current;
            }
            randomVector[current] = temp;
        }
    }
    t = clock() - t;
    cout << "It took " << (((float)t)/CLOCKS_PER_SEC) << " seconds to sort this vector" << endl;
    //time end
    return randomVector;
}

vector<IComparable*> Sort::sortString(vector<IComparable*> randomVector) {
    clock_t t = clock();
    if(randomVector.size() > 1) {
        for (int i = 1; i < randomVector.size(); ++i) {
            StringWrapper *temp = dynamic_cast<StringWrapper *>(randomVector[i]);
            int current = i;
            while (current > 0 && temp->isLessThan(randomVector[current - 1])) {
                randomVector[current] = randomVector[current - 1];
                --current;
            }
            randomVector[current] = temp;
        }
    }
    t = clock() - t;
    cout << "\nIt took " << (((float)t)/CLOCKS_PER_SEC) << " seconds to sort this vector" << endl;
    return randomVector;
}

bool Sort::sortVerify(vector<IComparable*> randomVector) {;
    if(randomVector.size() > 1) {
        for (int i = 0; i < randomVector.size()-1; ++i) {
            if(dynamic_cast<IntWrapper *>(randomVector[i])) {
                IntWrapper *current = dynamic_cast<IntWrapper *>(randomVector[i]);
                IntWrapper *ahead = dynamic_cast<IntWrapper *>(randomVector[i + 1]);
                if (!current->isLessThan(ahead) && current->getInt() != ahead->getInt()) {
                    return false;
                }
            } else if (dynamic_cast<StringWrapper *>(randomVector[i])) {
                StringWrapper *current = dynamic_cast<StringWrapper *>(randomVector[i]);
                StringWrapper *ahead = dynamic_cast<StringWrapper *>(randomVector[i + 1]);
                if (!current->isLessThan(ahead) && current->getString() != ahead->getString()) {
                    return false;
                }
            }
        }
    }
    return true;
}