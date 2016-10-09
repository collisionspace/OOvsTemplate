//
// Created by James Slone on 10/1/16.
//

#ifndef SLONEJ3_PROJECT2_STRINGWRAPPER_H
#define SLONEJ3_PROJECT2_STRINGWRAPPER_H

#include "IComparable.h"


class StringWrapper : public IComparable {
public:
    StringWrapper(string wrappedString);
    virtual bool isLessThan(IComparable *compareTo);
    virtual string getString();


    bool operator<(const StringWrapper &rhs) const;
    bool operator>(const StringWrapper &rhs) const;
    bool operator!=(const StringWrapper &rhs) const;

private:
    string wrappedString;
};


#endif //SLONEJ3_PROJECT2_STRINGWRAPPER_H
