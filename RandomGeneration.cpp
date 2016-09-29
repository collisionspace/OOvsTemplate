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

void RandomGeneration::randomVector(int size) {
    std::vector<string> randomStrings(size);
    for(int i = 0; i < size; i++) {
        randomStrings[i] = randomString();
    }
}