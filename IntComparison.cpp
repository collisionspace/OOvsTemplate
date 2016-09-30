//
// Created by James Slone on 9/29/16.
//

#include "IntComparison.h"

IntComparison::IntComparison(int wrappedInt) : wrappedInt(wrappedInt) {}

bool IntComparison::isLessThan(IComparable *compareTo) {
    IntComparison* rhs = dynamic_cast<IntComparison*>(compareTo);
    return wrappedInt < rhs->getInt();
}

int IntComparison::getInt() {
    return wrappedInt;
}