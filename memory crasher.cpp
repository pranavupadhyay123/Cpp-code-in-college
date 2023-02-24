#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int createNewInt() {
    srand(time(0)); // Seed the random number generator with current time
    int newInt = rand() % 100; // Generate a random integer between 0 and 99
    return newInt;
}

int main() {
    // Call createNewInt function 5 times and print the returned integers
    for (int i = 0; i < 5; i++) {
        int newInt = createNewInt();
        cout << "New integer: " << newInt << endl;
    }
    return 0;
}