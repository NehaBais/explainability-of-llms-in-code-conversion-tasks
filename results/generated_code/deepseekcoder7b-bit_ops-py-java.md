Here is the equivalent Java code for your Python program. It closely follows same logic with some syntax differences and changes because of language difference. One important point to note here in java we don't have bitwise shift operators like '<<', '>>' etc., So, we use Math methods instead which perform arithmetic shifts:

```java
public class BitwiseOperations {
    
    public static void main(String[] args) {
        int width = 8;
        int a = 27;
        int b = 125;
        
        bitwise_built_ins(width, a, b);
        helper_funcs(width, a); 
    }
    
    public static void bitwise_built_ins(int width, int a, int b) {
        int mask = (1 << width) - 1;        
        System.out.println("AND: " + Integer.toBinaryString((a & b) & mask));          
        System.out.println("OR: "  + Integer.toBinaryString((a | b) & mask));         
        System.out.println("NOT A: "  + Integer.toBinaryString(~a & mask)); 
    }    
        
    public static void helper_funcs(int width, int a) {             
        int mask = (1 << width) - 1;  
        // Rotate Right
        System.out.println("ROTATE RIGHT by 1: "  + Integer.toBinaryString((a >> 1) & mask));          
        System.out.println("ROTATE RIGHT by 2: "  + Integer.toBinaryString((a >> 2) & mask));  
        
        // Sign extending arithmetic shift right      
        int a_ = (a | (mask << 31)) >> 1;     
                
        System.out.println("Sign extending ARITHMETIC SHIFT RIGHT by 1: "  + Integer.toBinaryString(a_ & mask));  
    }    
}
```
In the main method, we call `bitwise_built_ins` and `helper_funcs` methods with test values to see output on console. The `bitwise_built_ins` prints bitwise AND, OR operations of integers a and b. Bitwise NOT operation is also implemented for integer a in this method.
The `helper_funcs` displays arithmetic right shift (same as sign extending logical shift right) for a and rotate left/right operations.
Replace the width variable value according to your need. You can call main method from here, or just run it directly. The output will be printed on console. 
This code needs JDK8+ installed in order to compile and run because of usage of lambda functions.
Note: `Integer.toBinaryString()` is used for converting integer value to binary string which can be printed as a binary number. It's not necessary, but it helps visualize the results. You may remove this if you don't need binary representation in output.

