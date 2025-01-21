#include <iostream>
#include <streambuf>
#include <vector>

int main() { std::vector<int64_t> vec = {1, 2, 3, 4, 5} };

// Create a streambuf pointer to convert the vector to
std::basic_streambuf<char_type, traits_type> *sb =
    new std::basic_streambuf<char_type, traits_type>();

// Write the vector data to the streambuf using the `sputc` member function.
for (const auto &val : vec) {
        sb->sputc(static_cast<char>(val & 0xFF))));
}

// Get a pointer to the underlying character array in the streambuf and print
// its contents.
char *chars = sb->str();
for (const auto &val : vec) {
        std::cout << static_cast<char>(val & 0xFF))));
}

delete sb;
return 0;
}