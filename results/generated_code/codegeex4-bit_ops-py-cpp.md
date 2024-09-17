```cpp
#include <iostream>
#include <iomanip>

// Rotate a 'n' times to the right
template<int width>
uint64_t rotr(uint64_t a, int n) {
    "Rotate a, n times to the right"
    if(n < 0){
        return rotl<width>(a, -n);
    } else if(n == 0){
        return a;
    } else{
        uint64_t mask = (1ULL << width) - 1;
        a &= mask;
        n %= width;
        return ((a >> n)
                | ((a & ((1ULL << n) - 1)) 
                   << (width - n)));  
    }
}

// Rotate a 'n' times to the left
template<int width>
uint64_t rotl(uint64_t a, int n) {
    "Rotate a, n times to the left"
    if(n < 0){
        return rotr<width>(a, -n);
    } else if(n == 0){
        return a;
    } else{
        uint64_t mask = (1ULL << width) - 1;
        a &= mask;
        n %= width;
        return (((a << n) & mask)
                | (a >> (width - n)));  
    }
}

// Arithmetic shift a 'n' times to the right. (sign preserving).
template<int width>
uint64_t asr(uint64_t a, int n) {
    "Arithmetic shift a, n times to the right. (sign preserving)."
    uint64_t mask = (1ULL << width) - 1;
    uint64_t top_bit_mask = 1ULL << (width - 1);
    if(n < 0){
        return  (a << -n) & mask;
    } else if(n == 0){
        return a;
    } else if(n >= width){
        return mask & top_bit_mask ? mask : 0;
    } else{
        a &= mask;
        if(a & top_bit_mask){   // Sign bit set?
            uint64_t signs = (1ULL << n) - 1;
            return a >> n | (signs << width - n);
        } else{
            return a >> n;  
        }
    }
}

template<int width>
void helper_funcs(uint64_t a){
    uint64_t mask, top_bit_mask;
    mask = (1ULL << width) - 1;
    top_bit_mask = 1ULL << (width - 1);
    uint64_t aa = a | top_bit_mask;  // a with top bit set

    std::cout << "ROTATIONS\n";

    std::cout << "RIGHT:\n";
    std::cout << "\trotr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << rotr<width>(a, 1) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << rotr<width>(a, 1) << "\n";
    std::cout << "\trotr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << rotr<width>(a, 2) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << rotr<width>(a, 2) << "\n";
    std::cout << "\trotr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << rotr<width>(a, 4) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << rotr<width>(a, 4) << "\n";

    std::cout << "LEFT:\n";
    std::cout << "\trotl(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << rotl<width>(a, 1) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << rotl<width>(a, 1) << "\n";
    std::cout << "\trotl(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << rotl<width>(a, 2) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << rotl<width>(a, 2) << "\n";
    std::cout << "\trotl(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << rotl<width>(a, 4) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << rotl<width>(a, 4) << "\n";
    
    std::cout << "SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:\n";
    std::cout << "\tasr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(a, 1) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(a, 1) << "\n";
    std::cout << "\tasr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(aa, 1) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(aa, 1) << "\n";
    std::cout << "\tasr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(a, 2) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(a, 2) << "\n";
    std::cout << "\tasr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(aa, 2) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(aa, 2) << "\n";
    std::cout << "\tasr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(a, 4) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(a, 4) << "\n";
    std::cout << "\tasr(" << width << ", 0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(aa, 4) << ") = \t\t0b" << std::setw(width) << std::setfill('0') << std::hex << asr<width>(aa, 4) << "\n";
}

int main()
{
    uint8_t a = 27; //27 in decimal is 1B in hexadecimal
    bitwise_operations(a);
}
```