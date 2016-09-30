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
    for(int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << endl;
    }
    return 0;
}