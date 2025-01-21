#include <bitset>
#include <iostream>

int main() {
  unsigned int a = 10;
  unsigned int b = 15;
  unsigned int width = 3;
  const unsigned int mask =
      0b11111; // Mask with bit values up to the specified width

    std::cout << "and(" 
                        << bitset<32>(a)).to_string() 
                      << ", " 
                      << bitset<32>(b)).to_string() 
                      << ") = 0b" 
                      << bitset<32>((a & b) & mask)).to_string() << std::endl;

    std::cout << "or(" 
                        << bitset<32>(a)).to_string() 
                      << ", " 
                      << bitset<32>(b)).to_string() 
                      << ") = 0b" 
                      << bitset<32>((a | b) & mask)).to_string() << std::endl;

    std::cout << "xor(" 
                        << bitset<32>(a)).to_string() 
                      << ", " 
                      << bitset<32>(b)).to_string() 
                      << ") = 0b" 
                      << bitset<32>((a ^ b) & mask)).to_string() << std::endl;

    return 0;
}