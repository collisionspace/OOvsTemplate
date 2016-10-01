//
// Created by James Slone on 10/1/16.
//

#include "StringWrapper.h"

StringWrapper::StringWrapper(string wrappedString) : wrappedString(wrappedString) { }

bool StringWrapper::isLessThan(IComparable *compareTo) {
    StringWrapper* rhs = dynamic_cast<StringWrapper*>(compareTo);
    return wrappedString < rhs->getString();
}

string StringWrapper::getString() {
    return wrappedString;
}
