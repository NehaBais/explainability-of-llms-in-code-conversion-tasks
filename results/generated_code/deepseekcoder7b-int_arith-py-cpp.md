Here is the equivalent C++ code for your Python script. As per rounding towards zero, we will use truncation in quotient while calculating integer and remainder. 

Please note that C++ uses `std::cout` to print outputs instead of using a combination of '+' operator and `std::to_string()` as is done in Python. Also C++ needs static typing hence variable declaration with their types explicitly mentioned (e.g., int, float). 

```C++
#include<iostream>
using namespace std;
int main(){
    // Get two integers from the user
    int input1 = 18;
    int input2 = 7;
    
    // Calculate and print their sum
    cout << "Sum:              "<< (input1 + input2) << endl; 

    // Calculate and print difference
    cout << "Difference:        "<<(input1 - input2 )<<endl; 
    
    // Calculate and print product
    cout << "Product:           "<< (input1 * input2 )<<endl;
  
    // Calculate integer quotient. Here, for simplicity we assume that the inputs are non-zero to avoid divide by zero error. In a real application you would need to handle this case properly
    cout << "Integer Quotient:  " << (input1 / input2 )<<endl;  
    
    // For float quotient, similar to integer quotient, we assume that the inputs are non-zero
    cout << "Float Quotient:    " <<  ((float)input1/ input2 ) << endl; 
      
    // Calculate remainder and print it. Again assuming non-zero division as in real scenarios you would need to handle this case properly.
    int rr = input1 % input2 ;  
    cout << "Whole Remainder:   "<< rr<<endl; 
    
    // For actual remainder, again we assume the inputs are non-zero and positive. In real scenarios you would need to handle this case properly.
    float tt = (float)input1 / input2 ;
    cout << "Actual Remainder:  "<< ((int)(tt * 10))<<endl;  
    
    // Calculate exponentiation and print it. Again we assume the inputs are non-zero and positive. In real scenarios you would need to handle this case properly.
    int yy = pow(input1, input2 );
    cout << "Exponentiation:    "<< yy<<endl; 
    
   return <｜begin▁of▁sentence｜>0; // program returns 0 if successful run
}
```
For remainder calculation and exponentiation, I've considered that the inputs are non-zero. In a real application you need to handle these scenarios properly by checking for zero division error or overflow issues.

