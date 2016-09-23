#include "RandomGeneration.h"

int main() {
    RandomGeneration rand = RandomGeneration();
    srand(time(NULL));
    cout << rand.randomString() << endl;
    return 0;
}