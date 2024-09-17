Here is the Java code that performs bitwise operations on two integers, based on the requirements provided:
```
public class BitwiseExample {
 
 public static void main(String[] args) {
  int a = 5; // replace with your desired integer values for a and b
  int b = 3;
  int result;
  System.out.println("a and b: " + (a & b));
  System.out.println("a or b: " + (a | b));
  System.out.println("a xor b: " + (a ^ b));
  System.out.println("not a: " + (~a));
  result = a << b; // left shift
  System.out.println("a << n: " + result);
  result = a >> b; // right shift
  System.out.println("a >> n: " + result);
  int c = a; // convert to unsigned integer for logical shift
  result = c >>> b; // logical right shift
  System.out.println("c >> b: " + result);
 }
}
```
Note that the Java shift operators (`<<`, `>>`, and `>>>`) perform arithmetic, logical, and arithmetic shifts respectively. The `>>` operator performs an arithmetic shift by default, but can be changed to a logical shift by using the unsigned right shift operator (`>>>`). 
Also note that Java does not have bitwise rotation operators, so the code provided here only includes left and right shifts. If you need to perform rotations, you will need to implement them yourself or use a library that provides such functionality.

