#include <iostream>
#include <string>
#include <typeinfo>

template <typename T1, typename T2> void compare(T1 a, T2 b) {
    std::cout << "\n"
                        << "%r is of type %r and %r is of type %r\n"
                        << "%s is %s \n"
                        << (a == b ? "equal to" : "not equal to"))
                  << std::endl;

    if (a < b) {
        std::cout << (a, b));
    } else if (a <= b) {
       std::cout << (a, b));
    } else if (a > b) {
      std::cout << (a, b));
    } else if (a >= b) {
       std::cout << (a, b));
    }

    if (a != b && a < b) {
        std::cout << (a, b));
    }
}

int main() {
    compare<std::string, std::string>("YUP", "YUP"));
    compare<std::string, std::string>("BALL", "BELL"));
    compare<std::string, std::string>("24", "123"));
    compare<int, int>(24, 123));
    compare<double, double>(5.0, 5));

    return 0;
}