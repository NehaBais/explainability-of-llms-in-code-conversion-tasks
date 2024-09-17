Here is the converted Java code that performs bitwise operations on two integers and shifts/rotates them based on a second integer:
```
public class BitwiseOperations {
 public static void main(String[] args) {
 int a = 10; // replace with desired values for a and b
 int b = 5;
 
 System.out.println("a AND b: " + (a & b));
 System.out.println("a OR b: "+ (a | b));
 System.out.println("a XOR b: "+ (a ^ b));
 System.out.println("NOT a: " + ~a);
 System.out.println("a << b: " + (a << b)); // left shift
 System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
 System.out.println("a >>> b: " + (a >>> b)); // logical right shift
 }
}
```
Note that in Java, the bitwise AND operator is `&`, the OR operator is `|`, and the XOR operator is `^`. The NOT operator is '~'. Shifts and rotates are done using the left shift operator `<<`, arithmetic right shift operator `>>`, and logical right shift operator `>>>`.

