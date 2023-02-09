#include <iostream>
#include <string>
using namespace std;
// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "Ford";
  carObj1.model = "Everest";
  carObj1.year = 2018;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Skoda";
  carObj2.model = "Superb";
  carObj2.year = 2022;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
