#include <iostream>
#include <fstream>
using namespace std;
int main() {
    
    ofstream inthefile("input.txt");
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    inthefile <<"hello peter i am dr. octivious"<<endl;
    inthefile <<"hello peter i am dr. octivious"<<endl;
    inthefile <<"hello peter i am dr. octivious"<<endl;
    inthefile <<"hello peter i am dr. octivious"<<endl;

    char ch;
    while (infile.get(ch)) {
        outfile.put(ch);
    }

    // Close the input and output files
    infile.close();
    outfile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}
