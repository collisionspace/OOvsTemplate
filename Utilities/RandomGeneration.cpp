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

vector<IComparable*> RandomGeneration::randomStringComparableVector(int size) {
    std::vector<IComparable*> randomStrings(size);
    for(int i = 0; i < size; i++) {
        randomStrings[i] = new StringWrapper(randomString());
    }
    return randomStrings;
}

vector<IComparable*> RandomGeneration::randomIntComparableVector(int size) {
    std::vector<IComparable*> randomInts(size);
    for(int i = 0; i < size; i++) {
        randomInts[i] = new IntWrapper(randomGenerator(0,1000));
    }
    return randomInts;
}

void RandomGeneration::randomIntWrapperGenericVector(vector<IntWrapper*> *randomInts, int size) {
    //std::vector<IntWrapper*> randomInts(size);
    for(int i = 0; i < size; i++) {
        IntWrapper *tWrap = new IntWrapper(randomGenerator(0,1000));
        randomInts->push_back(tWrap);
    }
}

void RandomGeneration::randomStringWrapperGenericVector(vector<StringWrapper*> *randomStr, int size) {
    //std::vector<IntWrapper*> randomInts(size);
    for(int i = 0; i < size; i++) {
        StringWrapper *randStr = new StringWrapper(randomString());
        randomStr->push_back(randStr);
    }
}