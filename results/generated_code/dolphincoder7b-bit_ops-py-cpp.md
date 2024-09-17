```cpp
#include <iostream>
#include <bitset>
 
uint32_t rotate_right(int width, uint32_t a, int n) {
    if (n == 0)
        return a;
 
    int mask = ((1 << width) - 1);
    // Applying right shift and then AND operation to get the required result
    return ((a >> n) | (a << (width - n)) & mask);
}
 
uint32_t rotate_left(int width, uint32_t a, int n) {
    if (n == 0)
        return a;
 
    int mask = ((1 << width) - 1);
    // Applying left shift and then AND operation to get the required result
    return (((a << n) & mask) | (a >> (width - n)));
}
 
int main() {
    uint32_t a, b;
    std::cout << "Enter a number: ";
    std::cin >> a;
 
    int width = sizeof(uint32_t) * 8;
    uint32_t mask = (1ULL << width) - 1;
 
    // AND operation
    uint32_t and_result = (a & b);
    std::cout << "AND:    0b" << std::bitset<32>(a)
              << " & 0b" << std::bitset<32>(b)
              << " = 0b" << std::bitset<32>(and_result & mask)
              << "\n";
 
    // OR operation
    uint32_t or_result = (a | b);
    std::cout << "OR:     0b" << std::bitset<32>(a)
              << " | 0b" << std::bitset<32>(b)
              << " = 0b" << std::bitset<32>(or_result & mask)
              << "\n";
 
    // XOR operation
    uint32_t xor_result = (a ^ b);
    std::cout << "XOR:    0b" << std::bitset<32>(a)
              << " ^ 0b" << std::bitset<32>(b)
              << " = 0b" << std::bitset<32>(xor_result & mask)
              << "\n";
 
    // NOT operation
    uint32_t not_result = (~a);
    std::cout << "NOT:    ~0b" << std::bitset<32>(a)
              << "         = 0b" << std::bitset<32>(not_result & mask)
              << "\n";
 
    // Right shift operation
    uint32_t right_shifted = (a >> 1);
    std::cout << "RIGHT SHIFT: 0b" << std::bitset<32>(a)
              << " >> 1          = 0b" << std::bitset<32>(right_shifted & mask)
              << "\n";
 
    // Left shift operation
    uint32_t left_shifted = (a << 1);
    std::cout << "LEFT SHIFT:  0b" << std::bitset<32>(a)
              << " << 1          = 0b" << std::bitset<32>(left_shifted & mask)
              << "\n";
 
    // Rotate right operation
    uint32_t rotate_right_result = rotate_right(width, a, 1);
    std::cout << "ROTATE RIGHT:  0b" << std::bitset<32>(a)
              << " >> 1          = 0b" << std::bitset<32>(rotate_right_result & mask)
              << "\n";
 
    // Rotate left operation
    uint32_t rotate_left_result = rotate_left(width, a, 1);
    std::cout << "ROTATE LEFT:  0b" << std::bitset<32>(a)
              << " << 1          = 0b" << std::bitset<32>(rotate_left_result & mask)
              << "\n";
}
```