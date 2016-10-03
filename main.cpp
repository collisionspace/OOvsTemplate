#include "RandomGeneration.h"
#include "Sort.h"
#include "templateGen.h"
int main() {
    RandomGeneration rand = RandomGeneration();
    srand(time(NULL));

   /* vector<int> sizeVectors({100,100,100,1000,1000,1000,10000,10000,10000,100000,100000,100000});
    for(int i = 0; i < sizeVectors.size(); i++) {
        vector<IComparable *> randomInts = rand.randomIntComparableVector(sizeVectors[i]);
        vector<IComparable *> sortInt = Sort::sortInt(randomInts);
        bool sortVerifyInt = Sort::sortVerify(sortInt);
        cout << "Sort size =" << sizeVectors[i] << ", Sort int verify = " << sortVerifyInt << endl;

        vector<IComparable *> randomStrings = rand.randomStringComparableVector(sizeVectors[i]);
        vector<IComparable *> sortStr = Sort::sortString(randomStrings);
        bool sortVerifyStr = Sort::sortVerify(sortStr);
        cout << "Sort size = " << sizeVectors[i] << ", Sort str verify = " << sortVerifyStr << "\n\n" << endl;
    }
*/
    vector<int> tRand = rand.randomIntVector(100);
    templateGen<int> sortI = templateGen<int>(tRand);
    sortI.sort(tRand);
    return 0;
}