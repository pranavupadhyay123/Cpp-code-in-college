#include <iostream>
using namespace std;
int main() {
  double highest_price;
  string most_expensive_book;

  cout << "Enter the name and price of up to 20 books." << endl;
  for (int i = 0; i < 20; i++) {
    string name;
    double price;

    cout << "Enter name of book #" << (i + 1) << ": ";
    cin >> name;

    cout << "Enter price of book #" << (i + 1) << ": ";
    cin >> price;

    if (price > highest_price) {
      highest_price = price;
      most_expensive_book = name;
    }
  }

  cout << "The most expensive book is: " << most_expensive_book << ", with a price of " << highest_price << "INR"<<endl;

  return 0;
}