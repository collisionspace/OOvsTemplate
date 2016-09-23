#include "RandomGeneration.h"

int main() {
    RandomGeneration rand = RandomGeneration();
    srand(time(NULL));
    cout << rand.randomString() << endl;

    rand.randomVector(1000);
    return 0;
}