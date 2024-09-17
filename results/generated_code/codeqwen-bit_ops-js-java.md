Here is the Java version of your JavaScript code:

```java
public class Main {
    public static void main(String[] args) {
        int A = 10;
        int B = 2;
        bitwise(A, B);
    }

    static void bitwise(int A, int B){
        System.out.println("A AND b: " + (A & B));
        System.out.println("A OR b: "+ (A | B));
        System.out.println("A XOR b: "+ (A ^ B));
        System.out.println("NOT a: " + ~A);
        System.out.println("A << b: " + (A << B)); // left shift
        System.out.println("A >> b: " + (A >> B)); // arithmetic right shift
        System.out.println("A >>> b: " + (A >>> B)); // logical right shift
    }
}
```

Please note that JavaScript and Java have different ways of performing bitwise operations due to differences in their under-lying data types and integer representation. In the case of left and right shifts, you need to ensure that you are using integers as inputs for the shift operation (not floating point numbers) because in JavaScript, when you input a float number, it is automatically rounded down.
