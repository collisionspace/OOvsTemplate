//
// Created by James Slone on 9/29/16.
//

#ifndef SLONEJ3_PROJECT2_SORT_H
#define SLONEJ3_PROJECT2_SORT_H


#include <vector>
#include "IComparable.h"

class Sort {

public:
    static vector<IComparable*> sortInt(vector<IComparable*>);
    static vector<IComparable*> sortString(vector<IComparable*>);
    static bool sortVerify(vector<IComparable*>);
};


#endif //SLONEJ3_PROJECT2_SORT_H
