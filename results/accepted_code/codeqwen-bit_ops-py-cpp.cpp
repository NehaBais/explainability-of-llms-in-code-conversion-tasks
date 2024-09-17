#include <bitset>
#include <iostream>

void bitwise_built_ins(int width, int A, int b) {
  std::string mask = std::string((width + 1), '1');
  std::cout << "AND:     0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(A) << "\n";
  std::cout << "        & 0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(b) << "\n";
  std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
            << (((long long)A & b) & std::stoi(mask)) << "\n\n";

  std::cout << "OR:      0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(A) << "\n";
  std::cout << "        | 0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(b) << "\n";
  std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
            << (((long long)A | b) & std::stoi(mask)) << "\n\n";

  std::cout << "XOR:     0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(A) << "\n";
  std::cout << "        ^ 0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(b) << "\n";
  std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
            << (((long long)A ^ b) & std::stoi(mask)) << "\n\n";

  std::cout << "NOT:     0b" << std::setfill('0') << std::setw(width)
            << std::bitset<8>(~A) << "\n\n";
}

void helper_funcs(int width, int A) {
  std::string mask = std::string((width + 1), '1');
  long long aa = (long long)A;

  std::cout << "LEFT:    rotl(" << width << ", 0b" << std::setfill('0')
            << std::setw(width) << std::bitset<8>(A) << ", 1)\n";
  for (int i = 1; i <= 4; ++i) {
    std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
              << (((long long)A << i) & std::stoi(mask)) << "\n";
  }

  std::cout << "\nRIGHT:   rotr(" << width << ", 0b" << std::setfill('0')
            << std::setw(width) << std::bitset<8>(A) << ", 1)\n";
  for (int i = 1; i <= 4; ++i) {
    std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
              << (((long long)A >> i) & std::stoi(mask)) << "\n";
  }

  std::cout << "\nSIGN-EXTENDING ARITHMETIC SHIFT RIGHT\n";
  std::cout << "        asr(" << width << ", 0b" << std::setfill('0')
            << std::setw(width) << std::bitset<8>(A) << ", 1)\n";
  for (int i = 1; i <= 4; ++i) {
    std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
              << ((A >> i) & std::stoi(mask)) << "\n";
  }

  std::cout << "        asr(" << width << ", 0b" << std::setfill('0')
            << std::setw(width) << std::bitset<8>(Aa) << ", 1)\n";
  for (int i = 1; i <= 4; ++i) {
    std::cout << "        = 0b" << std::setfill('0') << std::setw(width)
              << ((Aa >> i) & std::stoi(mask)) << "\n";
  }
}

int main() {
  bitwise_built_ins(8, 27, 125);
  helper_funcs(8, 27);
  return 0;
}