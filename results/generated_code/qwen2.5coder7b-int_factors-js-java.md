Here is the Java version of your JavaScript code:

```java
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static void main(String[] args) {
        System.out.println(factors(45));  // [1,3,5,9,15,45]
        System.out.println(factors(53));  // [1,53]
        System.out.println(factors(64));  // [1,2,4,8,16,32,64]
    }

    public static ArrayList<Integer> factors(int num) {
        ArrayList<Integer> n_factors = new ArrayList<>();
        for (int i = 1; i <= Math.floor(Math.sqrt(num)); i++) {
            if (num % i == 0) {
                n_factors.add(i);
                if (num / i != i)
                    n_factors.add(num / i);
            }
        }

        Collections.sort(n_factors);  
        return n_factors;
    }  
}
```

This code defines a method `factors` that computes the factors of a positive integer, and then calls this function with three test numbers. As in your original JavaScript version, every prime number has two factors: 1 and itself.

The Java ArrayList is used to store the factors as they are found. After all factors have been found, the `Collections.sort()` method is called on the ArrayList to sort the factors in ascending order.

Note that unlike JavaScript's `Math.floor()`, Java's `Math.floor()` returns a double rather than an int, so it must be cast to an int before being used as the upper bound of the for loop.
