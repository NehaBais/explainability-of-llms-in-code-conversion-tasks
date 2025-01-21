#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

void bit_operations() {
  // Assume a_bitset and shifts are already defined and initialized as in the
  // original code.
  for (int shift : shifts) {
    cout << "0b" << ((a_bitset >> shift).to_ulong()).to_string();
  }
}