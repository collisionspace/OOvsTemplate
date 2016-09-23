//
// Created by James Slone on 9/22/16.
//

#include "RandomGeneration.h"

RandomGeneration::RandomGeneration() {}

int RandomGeneration::randomGenerator(int begin, int end) {
    int random = rand() % end + begin; //number between begin and end
    return random;
}
string RandomGeneration::randomString() {
    int size = randomGenerator(1,4);
    string randomString = "";
    char cAlphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for(int i = 0; i < size; i++) {
        int randomChar = randomGenerator(0,25);
        randomString += cAlphabet[randomChar];
    }
    return randomString;
}

void RandomGeneration::randomVector(int size) {
    std::vector<string> stringVectors(size);
    for(int i = 0; i < size; i++) {
        stringVectors[i] = randomString();
    }
}