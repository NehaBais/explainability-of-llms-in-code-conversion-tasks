#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

template <typename T>
void demo_compare(const T &a, const T &b, const std::string &semantically) {
    std::cout << a << " and " << b << " are ";
    if (a == b) {
        std::cout << "" << semantically << " equal." << std::endl;
    } else {
        std::cout << ((a < b) ? "" : "not")) << semantic_t << " ordered before." << std::endl;
    }
}