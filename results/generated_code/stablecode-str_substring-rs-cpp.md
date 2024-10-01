Here is the equivalent code in C++:

```C++
#include <iostream>
#include <string>

int main() {

    std::string s = "abc文字化けdef";
    int n = 2;
    int m = 3;

    // Print 3 characters starting at index 2 (c文字))
    for(auto it = std::next(s.begin(), n)); 
        it != std::next(s.end(), n+m)); ++it) {
        std::cout << *it << " ";
    }

    // Print all characters starting at index 2 (c文字化けdef))
    for(auto it = std::next(s.begin(), n)); it != s.end(); ++it) {
        std::cout << *it;
    }

    // Print all characters except the last (abc文字化けde)))
    for(int i = 0; i < m-1; i++) {
        std::cout << " ";
    }
    for(auto it = s.begin(); it != std::prev(s.end(), m-1)); ++it) {
        std::cout << *it;
    }

    // Print 3 characters starting with 'b' (bc文))
    auto bpos = s.find('b');
    for(auto it = std::next(s.begin(), n+m).begin(); 
        it != std::next(s.end(), n+m)).take(m).collect::<String>()));

    // Print 3 characters starting with "けd" (けde))
    auto kpos = s.find("けd");
    for(auto it = std::next(s.begin(), n+m).begin(); 
        it != std::next(s.end(), n+m)).take(m).collect::<String>()));


    return 0;
}
```
Please, notice that in Rust the `println!` macro is used to print a formatted string to the standard output. In C++, the same functionality can be achieved using the `std::cout` object and related manipulators like `<< std::fixed << std::setprecision(2)`, which are used for setting the floating point precision in the output.

As you can see, to achieve the same functionality as in the original Rust code, we need to use a combination of different types of loops (like standard for-loop or while-loop), and related functions like `std::next()` and `std::find()`, which are used for advancing the iterator by a given number of steps and finding the position of a given character in the string.

Also, notice that in C++, when we want to print a string (like "abc文字化けdef") that contains characters with Unicode code points larger than U+0000 (like "文字" and "化け"))), we need to use some kind of encoding scheme (like UTF-8 or UTF-16)) that can handle all possible Unicode character sequences.

Also, notice that in C++, when we want to print a string with fixed precision floating point numbers (like "1.23" or "4.56"))), we need to use the `std::fixed` and `std::setprecision()` manipulators provided by the standard library. These manipulators are used for setting the format of floating point numbers that will be printed.

Finally, notice that in C++, when we want to print a formatted string with escape sequences (like "\n" or "\t"))), we need to use the `std::cout` object and related manipulators like `<< std::endl`, which are used for setting the format of output streams in C++.

Therefore, to achieve the same functionality as in the original Rust code, we need to use a combination of different types of loops (like standard for-loop or while-loop), related functions like `std::next()` and `std::find()`, encoding schemes (like UTF-8 or UTF-16) that can handle all possible Unicode character sequences, floating point precision manipulators (like `<< std::fixed << std::setprecision(2)`), escape sequences manipulators (like `std::cout << "\\n"`)) to achieve the desired output format.
