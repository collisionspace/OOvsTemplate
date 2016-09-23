#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int randomGenerator(int begin, int end) {
    int random = rand() % end + begin; //number between begin and end
    return random;
}
string randomString() {
    int size = randomGenerator(1,4);
    string randomString = "";
    char cAlphabet[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for(int i = 0; i < size; i++) {
        int randomChar = randomGenerator(0,25);
        randomString += cAlphabet[randomChar];
    }
    return randomString;
}

int main() {
    srand(time(NULL));
    cout << randomString() << endl;
    return 0;
}