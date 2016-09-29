//
// Created by James Slone on 9/29/16.
//

#ifndef SLONEJ3_PROJECT2_INTCOMPARISON_H
#define SLONEJ3_PROJECT2_INTCOMPARISON_H

#include "IComparable.h"

class IntComparison : public IComparable {
public:
    IntComparison(int wrappedInt);
    virtual bool isLessThan(IComparable *compareTo) override;
    virtual int getInt() override;
    virtual string getString() override;

private:
    int wrappedInt;

};


#endif //SLONEJ3_PROJECT2_INTCOMPARISON_H
