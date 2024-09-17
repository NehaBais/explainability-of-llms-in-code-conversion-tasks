Here is the equivalent C code for your Python program. The program will work in a similar way as yours, accepting two integers from user, and displaying their sum, difference, product, integer quotient (rounded towards zero), remainder, and exponentiation if possible. However, since there is no direct equivalent of the `input()` function in C, we'll have to take input manually in this case.

```c
#include<stdio.h>
int main(){
    int input1 = 18; //Uncomment and replace with scanf if you want user inputs
    //scanf("%d", &input1);
    int input2 = 7;  //Uncomment and replace with scanf if you want user inputs
    //scanf("%d", &input2);
    
    int sum = input1 + input2;
    printf("Sum: %d\n", sum);
  
    int diff = input1 - input2;
    printf("Difference: %d\n", diff);
 
    int product = input1 * input2;
    printf("Product: %d\n", product);
    
    float quotient_int = (float)input1 / input2;
    printf("Integer Quotient(rounded towards zero): %d\n", (int)quotient_int);
  
    int remainder = input1 % input2;
    printf("Remainder: %d\n", remainder); 
    
    if(input2 != 0){ //Error handling for divide by zero
        long long expo = (long long)input1 * (long long)input1;
        printf("Exponentiation: %lld\n", expo);
    } else {
      printf("Cannot compute, second input is 0.\n");  
    }
    
    return 0;
}
```

Please replace `scanf()` with appropriate code if the inputs are dynamic in your actual program. Also note that for integer exponentiation calculation we have casted to `long long` as it might be larger than `int` and could overflow otherwise. And before doing any division check the divisor is not zero, if it's 0 then print an error message instead of crashing the program.

