#include "RandomGeneration.h"
#include "Sort.h"

int main() {
    RandomGeneration rand = RandomGeneration();
    srand(time(NULL));

    vector<int> sizeVectors({1000,1000,1000,10000,10000,10000,100000,100000,100000});
    for(int i = 0; i < sizeVectors.size(); i++) {
        vector<IComparable *> randomInts = rand.randomIntVector(sizeVectors[i]);
        vector<IComparable *> sortInt = Sort::sortInt(randomInts);
        bool sortVerifyInt = Sort::sortVerify(sortInt);
        cout << "Sort size =" << sizeVectors[i] << ", Sort int verify = " << sortVerifyInt << endl;

        vector<IComparable *> randomStrings = rand.randomStringVector(sizeVectors[i]);
        vector<IComparable *> sortStr = Sort::sortString(randomStrings);
        bool sortVerifyStr = Sort::sortVerify(sortStr);
        cout << "Sort size = " << sizeVectors[i] << ", Sort str verify = " << sortVerifyStr << "\n\n" << endl;
    }
    return 0;
}