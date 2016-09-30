#include "RandomGeneration.h"
#include "Sort.h"
#include "IntComparison.h"

int main() {
    RandomGeneration rand = RandomGeneration();
    srand(time(NULL));
    cout << rand.randomString() << endl;

    vector<IComparable*> randomInts = rand.randomIntVector(1000);
    Sort s = Sort();
    vector<IComparable*> sorted = s.sortInt(randomInts);
    return 0;
}