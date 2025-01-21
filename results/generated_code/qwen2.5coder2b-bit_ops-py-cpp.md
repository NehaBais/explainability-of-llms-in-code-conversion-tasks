Below is the equivalent C++ code for the provided Python function `bitwise_built_ins` and `helper_funcs`. The C++ equivalent uses `std::bitset` to handle bit manipulation operations. Note that C++ does not have a direct equivalent of Python's binary string formatting (`:0{width}b`), so we use `std::bitset`'s conversion methods to format the results.

```cpp
#include <iostream>
#include <bitset>

void bitwise_built_ins(int width, int a, int b) {
    std::bitset<8> a_bitset(a);
    std::bitset<8> b_bitset(b);

    std::cout << "AND:     0b" << std::bitset<8>(a).to_string() 
              << " \n & 0b" << std::bitset<8>(b).to_string() 
              << " = 0b" << ((a & b) & mask).to_string() 
              << "\n OR:      0b" << std::bitset<8>(a).to_string() 
              << " \n | 0b" << std::bitset<8>(b).to_string() 
              << " = 0b" << ((a | b) & mask).to_string() 
              << "\n XOR:     0b" << std::bitset<8>(a).to_string() 
              << " \n ^ 0b" << std::bitset<8>(b).to_string() 
              << " = 0b" << ((a ^ b) & mask).to_string()
              << "\n NOT:   ~ 0b" << std::bitset<8>(a).to_string() 
              << " \n = 0b" << (~a_bitset.to_ulong()).to_string();

    int shifts[] = {1, 2, 4};
    for (int shift : shifts) {
        a_bitset = (a_bitset >> shift) | (a_bitset << (-shift));
        std::cout << "\n RIGHT:   0b" << a_bitset.to_string() 
                  << " \n SHIFTS";
        for (int s : shifts) {
            std::cout << "    Right shift by " << s << ":   0b"
                      << ((a_bitset >> s).to_ulong()).to_string();
        }
    }

    // Sign-extending arithmetic right shift
    a_bitset = a_bitset >> 1;
    std::cout << "\n SIGN-EXTENDING ARITHMETIC SHIFT RIGHT";
    for (int s : shifts) {
        std::cout << " \n asr(" << width << ", 0b" << a_bitset.to_string() 
                  << " , " << s << ") = 0b"
                  << ((a_bitset >> s).to_ulong()).to_string();
    }
}

void helper_funcs(int width, int a) {
    std::bitset<8> a_bitset(a);
    std::cout << "AND:     0b" << a_bitset.to_string() 
              << " \n OR:      0b" << a_bitset.to_string() 
              << " \n XOR:     0b" << a_bitset.to_string()
              << "\n NOT:   ~ 0b" << a_bitset.to_string();

    std::bitset<8> aa(a);
    aa.set(7); // Set the highest bit to simulate an extended binary

    int shifts[] = {1, 2, 4};
    for (int shift : shifts) {
        a_bitset = (a_bitset >> shift) | (a_bitset << (-shift));
        std::cout << "\n RIGHT:   0b" << a_bitset.to_string() 
                  << " \n SHIFTS";
        for (int s : shifts) {
            std::cout << "    Right shift by " << s << ":   0b"
                      << ((a_bitset >> s).to_ulong()).to_string();
        }
    }

    // Sign-extending arithmetic right shift
    a_bitset = a_bitset >> 1;
    std::cout << "\n SIGN-EXTENDING ARITHMETIC SHIFT RIGHT";
    for (int s : shifts) {
        std::cout << " \n asr(" << width << ", 0b" << a_bitset.to_string() 
                  << " , " << s << ") = 0b"
                  << ((a_bitset >> s).to_ulong()).to_string();
    }
}

int main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
    return 0;
}
```

### Explanation:
- **Bit Manipulation**: The C++ code uses `std::bitset` to handle bit manipulation operations.
- **Formatting**: For binary string formatting, we use `to_string()` method of `std::bitset`.
- **Sign-Extending Arithmetic Right Shift**: We set the highest bit of the `std::bitset` to simulate an extended binary for demonstration.

### Note:
This C++ code assumes that the inputs (`a` and `b`) are within the valid range for a 8-bit unsigned integer. If you need to handle larger or different types, you will need to modify the data types accordingly.
