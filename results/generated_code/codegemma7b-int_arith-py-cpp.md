```cpp
#include <iostream>

int main() {
    int input1, input2;
    std::cin >> input1 >> input2;

    int qq = input1 + input2;
    std::cout << "Sum: 		  " << qq << std::endl;

    int ww = input1 - input2;
    std::cout << "Difference: 	  " << ww << std::endl;

    int ee = input1 * input2;
    std::cout << "Product: 	  " << ee << std::endl;

    int rr = input1 / input2;
    std::cout << "Integer quotient: " << rr << std::endl;

    float float_rr = (float)input1 / input2;
    std::cout << "Float quotient:   " << float_rr << std::endl;

    float tt = (float)input1 / input2;
    int uu = int(tt) - int(tt * 10);
    std::cout << "Whole Remainder:  " << uu << std::endl;

    int actual_remainder = input1 % input2;
    std::cout << "Actual Remainder: " << actual_remainder << std::endl;

    int yy = std::pow(input1, input2);
    std::cout << "Exponentiation:   " << yy << std::endl;

    return 0;
}
```

