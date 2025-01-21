The equivalent code for the above C function in Java is given below:

```java
public class Main {
    public static void main(String[] args) {
        int a = 10; // initial value of a
        int b = 3;  // initial value of b
        
        // bitwise AND, OR, XOR operations
        System.out.println("a & b: " + (a & b));
        System.out.println("a | b: " + (a | b));
        System.out.println("a ^ b: " + (a ^ b));

        // bitwise NOT operation
        System.out.println("not a: " + (~a));

        // left shift operation
        System.out.println("a << n: " + (a << b)); 

        // arithmetic right shift operation
        System.out.println("a >> n: " + (a >> b)); 

        // logical right shift operation - Convert signed to unsigned first
        a = Math.abs(a); 
        System.out.println("c >> b: " + (a >> b)); 
    }
}
```

Note that the arithmetic right shift operator `>>` in Java performs sign extension, whereas it operates on unsigned integers as per C. The logical right shift operation converts the signed integer to an unsigned integer using `Math.abs()` and then performs a logical right shift.

Also note that Java does not have built-in operators for left rotate and right rotate operations, so if you want to perform these operations in your code, you would need to implement them yourself.
