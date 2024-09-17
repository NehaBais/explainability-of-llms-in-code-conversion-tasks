```cpp
#include <iostream>
#include <bitset>

using namespace std;

void bitwise_built_ins(int width, int a, int b) {
    int mask = (1 << width) - 1;

    cout << "AND: " << bitset<width>(a & b & mask) << endl;
    cout << "OR: " << bitset<width>(a | b & mask) << endl;
    cout << "XOR: " << bitset<width>(a ^ b & mask) << endl;
    cout << "NOT: " << bitset<width>(~a & mask) << endl;

    cout << "SHIFTS:" << endl;
    cout << "RIGHT: " << bitset<width>(a >> 1 & mask) << endl;
    cout << "LEFT: " << bitset<width>(a << 1 & mask) << endl;
}

int rotr(int width, int a, int n) {
    if (n < 0) {
        return rotl(width, a, -n);
    } else if (n == 0) {
        return a;
    } else {
        int mask = (1 << width) - 1;
        a = (a >> n) | ((a & ((1 << n) - 1)) << (width - n));
        return a & mask;
    }
}

int rotl(int width, int a, int n) {
    if (n < 0) {
        return rotr(width, a, -n);
    } else if (n == 0) {
        return a;
    } else {
        int mask = (1 << width) - 1;
        a = ((a << n) & mask) | (a >> (width - n));
        return a;
    }
}

int asr(int width, int a, int n) {
    int mask, top_bit_mask;
    mask = (1 << width) - 1;
    top_bit_mask = 1 << (width - 1);

    if (n < 0) {
        return asr(width, a, -n);
    } else if (n == 0) {
        return a;
    } else {
        a = (a >> n) & mask;
        if (a & top_bit_mask) {
            a |= mask << (width - n);
        }
        return a;
    }
}

void helper_funcs(int width, int a) {
    int aa = a | (1 << (width - 1));

    cout << "SIGN-EXTENDING ARITHMETIC SHIFT RIGHT:" << endl;
    cout << "asr(" << width << ", " << a << ", 1): " << bitset<width>(asr(width, a, 1)) << endl;
    cout << "asr(" << width << ", " << aa << ", 1): " << bitset<width>(asr(width, aa, 1)) << endl;
    cout << "asr(" << width << ", " << a << ", 2): " << bitset<width>(asr(width, a, 2)) << endl;
    cout << "asr(" << width << ", " << aa << ", 2): " << bitset<width>(asr(width, aa, 2)) << endl;
    cout << "asr(" << width << ", " << a << ", 4): " << bitset<width>(asr(width, a, 4)) << endl;
    cout << "asr(" << width << ", " << aa << ", 4): " << bitset<width>(asr(width, aa, 4)) << endl;
}

int main() {
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);
    return 0;
}
```

