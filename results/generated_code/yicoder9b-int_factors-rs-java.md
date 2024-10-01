Here is how you can convert this Rust code to Java: 
```java
import java.util.ArrayList;
import java.util.Collections;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        assert factors(100).equals(new ArrayList<Integer>(){{add(1); add(2); add(4); add(5); add(10); add(10); add(20); add(25); add(50); add(100);}});
        assert factors(101).equals(new ArrayList<Integer>(){{add(1); add(101);}}); 
    }

   static ArrayList<Integer> factors(int num) {
       ArrayList<Integer> factors = new ArrayList<>();  // creates a list for the factors of the number

       for (int i=1;i <= Math.sqrt(num)+1;i++) { 
           if (num % i == 0) {
               factors.add(i); // pushes smallest factor to factors
               factors.add(num/i); // pushes largest factor to factors
           }
       }
       Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
       return factors;  // returns the factors
   }
} 
```
This Java code does exactly what your Rust program does: it computes the factors of a positive integer and stores them in an ArrayList, which gets returned at the end. The ArrayList is sorted to make the output more readable.
Also please note that, the assert keyword has different usage between Rust and Java. In Rust, it's used for unit tests where as in java it can be used for debugging purpose.
