//
// Created by James Slone on 9/29/16.
//

#include "IntComparison.h"

IntComparison::IntComparison(int wrappedInt) : wrappedInt(wrappedInt) {}

bool IntComparison::isLessThan(IComparable *compareTo) {
    return wrappedInt < compareTo->getInt();
}

int IntComparison::getInt() {
    return wrappedInt;
}

string IntComparison::getString() {
    return nullptr;
}

