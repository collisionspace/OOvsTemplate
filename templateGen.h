//
// Created by James Slone on 10/1/16.
//

#ifndef SLONEJ3_PROJECT2_TEMPLATE_H
#define SLONEJ3_PROJECT2_TEMPLATE_H

#include <vector>
using namespace std;

template <class T> class templateGen {
public:

    templateGen(const vector<T> & v) : v(v) {}
    void sort(vector<T> &v);

private:
    vector<T> v;

};

#endif //SLONEJ3_PROJECT2_TEMPLATE_H
