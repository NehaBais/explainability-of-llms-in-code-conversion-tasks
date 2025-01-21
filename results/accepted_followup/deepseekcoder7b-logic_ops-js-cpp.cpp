#include <iostream> // for std::cout and std::endl

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << !a << std::endl;
}

int main() {          // Added the missing main function
  logic(true, false); // Calling our logic function with two boolean values
  return 0; // Return statement is compulsory in every C++ program's main
            // function. It can be just 0 or any other integer as per standard
            // coding guidelines.
}