 Sure, here is the equivalent Java code for the provided Rust code:

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        assert factor(100).equals(List.of(1, 2, 4, 5, 10, 10, 20, 25, 50, 100)); // asserts that two expressions are equal to each other
        assert factor(101).equals(List.of(1, 101));
    }

    public static List<Integer> factor(int num) {
        List<Integer> factors = new ArrayList<>();

        for (int i = 1; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                factors.add(i); // adds smallest factor to factors
                if (i != num / i) { // avoids adding the square root twice for perfect squares
                    factors.add(num / i); // adds largest factor to factors
                }
            }
        }
        Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
        return factors; // returns the factors
    }
}
```

This Java code mirrors the functionality of the provided Rust code. It computes the factors of a positive integer and ensures that every prime number has two factors: 1 and itself. The `factor` method iterates through possible divisors, collects them in a list, and then sorts and returns this list.
