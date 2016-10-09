//
// Created by James Slone on 9/29/16.
//

#ifndef SLONEJ3_PROJECT2_ICOMPARABLE_H
#define SLONEJ3_PROJECT2_ICOMPARABLE_H

#include <string>

using namespace std;

class IComparable {
public:
    virtual bool isLessThan(IComparable *compareTo) = 0;
};


#endif //SLONEJ3_PROJECT2_ICOMPARABLE_H
