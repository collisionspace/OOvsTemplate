//
// Created by James Slone on 9/22/16.
//

#include "RandomGeneration.h"

RandomGeneration::RandomGeneration() {}

int RandomGeneration::randomGenerator(int begin, int end) {
    return rand() % end + begin; //number between begin and end
}

string RandomGeneration::randomString() {
    int size = randomGenerator(1,4);
    string randomString = "";
    for(int i = 0; i < size; i++) {
        int randomChar = randomGenerator(0,25);
        randomString += cAlphabet[randomChar];
    }
    return randomString;
}

vector<IComparable*> RandomGeneration::randomStringVector(int size) {
    std::vector<IComparable*> randomStrings(size);
    for(int i = 0; i < size; i++) {
        randomStrings[i] = new StringWrapper(randomString());
    }
    return randomStrings;
}
vector<IComparable*> RandomGeneration::randomIntVector(int size) {
    std::vector<IComparable*> randomInts(size);
    for(int i = 0; i < size; i++) {
        randomInts[i] = new IntWrapper(randomGenerator(0,1000));
    }
    return randomInts;
}