#include <iostream>
using namespace std;

// Perform bitwise AND, OR, XOR, NOT operation on 'a' with mask of 'width' bits
void bitwise_built_ins(unsigned width, int a) {
  int mask = (1 << width) - 1; // Creates a mask of 'width' ones

  cout << ""
          "    AND:     0b{a :0{width}b}   &     0b{mask :0{width}b}      =    "
          " 0b{(a & mask) :0{width}b}"
          ""
       << endl;
  cout << ""
          "    OR:      0b{a :0{width}b}   |     0b{mask :0{width}b}      =    "
          " 0b{(a | mask) :0{width}b}"
          ""
       << endl;
  cout << ""
          "    XOR:     0b{a :0{width}b}   ^     0b{mask :0{width}b}      =    "
          " 0b{(a ^ mask) :0{width}b}"
          ""
       << endl;
  cout << ""
          "    NOT:     ~     0b{a :0{width}b}       =     0b{(~a & mask)}"
          ""
       << endl;
}

// Perform right, left and arithmetic shift 'n' times on the integer 'a'. If
// negative, perform left shift
void helper_funcs(unsigned width, int a) {
  int mask = (1 << width) - 1; // Creates a mask of 'width' ones
  cout << ""
          "    Right:   0b{a :0{width}b} >>     1      =     0b{(a >> 1) "
          ":0{width}b}"
          ""
       << endl;
  cout << ""
          "    Left:    0b{a :0{width}b} <<     1      =     0b{(a << 1) "
          ":0{width}b}"
          ""
       << endl;
  cout << ""
          "    Sign extending arithmetic shift right:  asr({width}, 0b{a "
          ":0{width}b}, 1) =     0b{(asr(width, a, 1)) :0{width}b}"
          ""
       << endl;
  cout << ""
          "    Sign extending arithmetic shift right:  asr({width}, 0b{a "
          ":0{width}b}, 2) =     0b{(asr(width, a, 2)) :0{width}b}"
          ""
       << endl;
  cout << ""
          "    Sign extending arithmetic shift right:  asr({width}, 0b{a "
          ":0{width}b}, 4) =     0b{(asr(width, a, 4)) :0{width}b}"
          ""
       << endl;
}

int main() {
  bitwise_built_ins(8, 27); // Performs bitwise operations on the integer '27'
                            // (in binary: 0b111111) and prints result
  helper_funcs(8, 27); // Performs shifting/rotating operation on the integer
                       // '27' and prints result
  return 0;
}