//
// Created by James Slone on 10/1/16.
//

#include "templateGen.h"

template <class T> void templateGen<T>::sort(vector<T> &v) {
    //clock_t t = clock();
    if(v.size() > 1) {
        for (int i = 1; i < v.size(); ++i) {
            T temp = v[i];
            int current = i;
            while (current > 0 && temp < v[current - 1]) {
                v[current] = v[current - 1];
                --current;
            }
            v[current] = temp;
        }
    }
    //t = clock() - t;
    //cout << "\nIt took " << (((float)t)/CLOCKS_PER_SEC) << " seconds to sort this vector" << endl;
   // return v;
}


