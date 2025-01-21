The error in a single line is: `';' expected`
This error occurred because there was an extra parenthesis close bracket (`)).

The fix for this error involves removing the extra parenthesis close bracket (`)).

Here's the corrected code in a single code block:
```java
public class BitwiseOperations 
{ 
    public static void main(String[] args) 
    { 
        int a = 10; // First integer 
        int b = 4;  // Second integer 

        System.out.println("a AND b: " + (a & b)))); 
        System.out.println("a OR b: " + (a | b))));
        System.out.println("a XOR b: " + (a ^ b))));
        System.out.println("NOT a: " + ~a));
        System.out.println("a << b: " + (a << b))));
        System.out.println("a >> b: " + (a >> b))));
        System.out.println("a >>> b: " + ((int) ((a >>> b)))  )); 
    } 
}
```
