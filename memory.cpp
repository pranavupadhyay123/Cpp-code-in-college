#include <iostream>
#include <vector>

using namespace std;

void createArray() {
    vector<int> arr;
    int num;
    char choice;

    do {
        // Prompt the user to enter values for the array
        cout << "Enter a number to add to the array: ";
        cin >> num;
        arr.push_back(num);

        // Ask the user whether to create another array
        cout << "Do you want to create another array? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    // Print out the contents of the array
    cout << "Array contents: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    createArray();

    return 0;
}