Below is the C++ version of your Python code:

```c++
#include <iostream>
#include <bitset>

int rotr(int width, int a, int n){
    if(n < 0)
        return rotl(width, a, -n);
    else if(n == 0)
        return a;
    else{
        a &= ((1 << width) - 1);
        n %= width;
        return (a >> n) | ((a & ((1 << n) - 1)) << (width - n));
    }
}

int rotl(int width, int a, int n){
    if(n < 0)
        return rotr(width, a, -n);
    else if(n == 0)
        return a;
    else{
        a &= ((1 << width) - 1);
        n %= width;
        return ((a << n) & ((1 << width) - 1)) | (a >> (width - n));
    }
}

int asr(int width, int a, int n){
    if(n < 0)
        return (a << (-n)) & ((1 << width) - 1);
    else if(n == 0)
        return a;
    else if(n >= width)
        return (a & (1 << (width - 1))) ? ((1 << width) - 1) : 0;
    else{
        a &= ((1 << width) - 1);
        if(a & (1 << (width - 1)))
            return (a >> n) | (((1 << n) - 1) << (width - n));
        else
            return a >> n;
    }
}

void bitwise_built_ins(int width, int a, int b){
    int mask = ((1 << width) - 1);
    std::cout<< "AND:     " << std::bitset<8>(a & b & mask) << "\n";
    std::cout<< "OR:      " << std::bitset<8>(a | b & mask) << "\n";
    std::cout<< "XOR:     " << std::bitset<8>(a ^ b & mask) << "\n";
    std::cout<< "NOT:   " << std::bitset<8>((~a) & mask) << "\n";
}

void helper_funcs(int width, int a){
    int mask = ((1 << width) - 1);
    int top_bit_mask = 1 << (width - 1);
    int aa = a | top_bit_mask;
    
    std::cout<< "ROTR:    " << rotr(width, a, 1) << "\n";
    std::cout<< "ROTL:    " << rotl(width, a, 1) << "\n";
    std::cout<< "ASR:     " << asr(width, a, 1) << "\n";
}

int main(){
    bitwise_built_ins(8, 27, 125);
    helper_funcs(8, 27);

    return 0;
}
```

Please note that in C++, `std::bitset` is used to print the binary representation of integers. You may need to modify the code depending on the exact width and values you want to use for your program.
