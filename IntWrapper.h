//
// Created by James Slone on 9/29/16.
//

#ifndef SLONEJ3_PROJECT2_INTCOMPARISON_H
#define SLONEJ3_PROJECT2_INTCOMPARISON_H

#include "IComparable.h"

class IntWrapper : public IComparable {
public:
    IntWrapper(int wrappedInt);
    virtual bool isLessThan(IComparable *compareTo);
    virtual int getInt();

    bool operator<(const IntWrapper &rhs) const;
    bool operator>(const IntWrapper &rhs) const;

private:
    int wrappedInt;

};


#endif //SLONEJ3_PROJECT2_INTCOMPARISON_H
