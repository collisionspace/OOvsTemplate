//
// Created by James Slone on 9/29/16.
//

#include "IntWrapper.h"

IntWrapper::IntWrapper(int wrappedInt) : wrappedInt(wrappedInt) {}

bool IntWrapper::isLessThan(IComparable *compareTo) {
    IntWrapper* rhs = dynamic_cast<IntWrapper*>(compareTo);
    return wrappedInt < rhs->getInt();
}

int IntWrapper::getInt() {
    return wrappedInt;
}

bool IntWrapper::operator<(const IntWrapper &rhs) const {
    return wrappedInt < rhs.wrappedInt;
}
bool IntWrapper::operator>(const IntWrapper &rhs) const {
    return wrappedInt > rhs.wrappedInt;
}