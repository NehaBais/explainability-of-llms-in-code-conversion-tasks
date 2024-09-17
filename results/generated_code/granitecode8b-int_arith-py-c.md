Here is the converted code from Python to C:
```
#include 
using namespace std;
int main() {
 int input1, input2, qq, ww, ee, rr, tt, yy;
 float rr_float, tt_float,uu_float;
 
 cout << "Enter first integer: ";
 cin >> input1;
 cout << "Enter second integer: ";
 cin >> input2;
 
 qq = input1 + input2;
 ww = input1 - input2;
 ee = input1 * input2;
 rr = input1 / input2;
 rr_float = (float)input1 / (float)input2;
 tt = rr_float;
 tt_float = (float)tt;
 uu_float = tt_float * 10.0;
 cout << "Sum: 		  " << qq << endl;
 cout << "Difference: 	  " << ww << endl;
 cout << "Product: 	  " << ee << endl;
 cout << "Integer quotient: " << rr << endl;
 cout << "Float quotient:   " << rr_float << endl;
 cout << "Whole Remainder:  " << (int)uu_float << endl;
 cout << "Actual Remainder: " << uu_float - int(uu_float) << endl;
 yy = pow(input1, input2);
 cout << "Exponentiation:   " << yy << endl;
 
 return 0;
}
```
Note that the code uses both integer and float division to calculate the quotient. The `rr` variable is an integer quotient, while the `rr_float` variable is a floating-point quotient. The `tt` variable is an integer quotient converted to a float, and the `uu_float` variable is used to calculate the whole remainder.

