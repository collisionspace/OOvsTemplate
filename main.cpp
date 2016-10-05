#include "RandomGeneration.h"
#include "Sort.h"

template <class T>
vector<T> sort(vector<T> v) {
    clock_t t = clock();
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
    t = clock() - t;
    cout << "\nIt took " << (((float)t)/CLOCKS_PER_SEC) << " seconds to sort this vector" << endl;
    return v;
}

template <class T>
bool sortVerify(vector<T> randomVector) {
    if(randomVector.size() > 1) {
        for (int i = 0; i < randomVector.size()-1; ++i) {
            T current = randomVector[i];
            T ahead = randomVector[i + 1];
            if (!(current < ahead) && current != ahead) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    RandomGeneration rand = RandomGeneration();
    srand(time(NULL));
    vector<int> sizeVectors({100,100,100,1000,1000,1000,10000,10000,10000,100000,100000,100000});

    /*
    cout << "OO Wrapper Functions\n\n" << endl;
    for(int i = 0; i < sizeVectors.size(); i++) {
        vector<IComparable *> randomInts = rand.randomIntComparableVector(sizeVectors[i]);
        vector<IComparable *> sortInt = Sort::sortInt(randomInts);
        bool sortVerifyInt = Sort::sortVerify(sortInt);
        cout << "Sort size = " << sizeVectors[i] << ", Sort int verify = " << sortVerifyInt << endl;

        vector<IComparable *> randomStrings = rand.randomStringComparableVector(sizeVectors[i]);
        vector<IComparable *> sortStr = Sort::sortString(randomStrings);
        bool sortVerifyStr = Sort::sortVerify(sortStr);
        cout << "Sort size = " << sizeVectors[i] << ", Sort str verify = " << sortVerifyStr << "\n\n" << endl;
    }*/

    cout << "Template Functions\n" << endl;

    for(int i = 0; i < sizeVectors.size(); i++) {
        vector<int> tRand = rand.randomIntVector(sizeVectors[i]);
        vector<int> sortI = sort(tRand);
        bool sortIntVerify = sortVerify(sortI);
        cout << "Sort size = " << sizeVectors[i] << ", Sort int verify = " << sortIntVerify << endl;

        vector<string> strRand = rand.randomStringVector(sizeVectors[i]);
        vector<string> sortStr = sort(strRand);
        bool sortStrVerify = sortVerify(sortStr);
        cout << "Sort size = " << sizeVectors[i] << ", Sort str verify = " << sortStrVerify << "\n\n" << endl;
    }
    return 0;
}