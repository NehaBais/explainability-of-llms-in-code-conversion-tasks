In C++, the bitwise operations are performed using similar operators. For example, `&` for AND, `|` for OR, and `^` for XOR operations. The left shift operator is `<<`, the arithmetic right shift operator is `>>`, and there is no logical right shift in C++. However, you can achieve a similar effect with unsigned integers using the `>>>` operator. Note that rotating an integer is not directly supported in standard C++, but it can be achieved by combining shift and bitwise OR operations.

Here's your JavaScript function translated to C++:

```cpp
#include <iostream>

void bitwise(int a, int b){
   std::cout << "a AND b: " << (a & b) << std::endl;
   std::cout << "a OR b: " << (a | b) << std::endl;
   std::cout << "a XOR b: " << (a ^ b) << std::endl;
   std::cout << "NOT a: " << ~a << std::endl;
   std::cout << "a << b: " << (a << b) << std::endl; // left shift
   std::cout << "a >> b: " << (a >> b) << std::endl; // arithmetic right shift
   std::cout << "unsigned a >>> b: " << static_cast<unsigned>(a) >> b << std::endl;
}

int main(){
    bitwise(10, 3); 
    return 0;
}
```

Please note:

1. The `bitwise` function now outputs the results to the console using `std::cout`.
2. The logical right shift on negative numbers in JavaScript (`>>>`) is simulated here by casting the integer to an unsigned before performing the right shift.
3. The `main()` function calls `bitwise(10, 3)` for demonstration purposes.

Make sure to include the necessary headers and adjust the code according to your specific requirements.
