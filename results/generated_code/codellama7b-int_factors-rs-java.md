Sure! Here's the code in Java:

```java
import java.util.*;
public class Factor {
  public static void main(String[] args) {
    assertEquals(Arrays.asList(1, 2, 4, 5, 10, 10, 20, 25, 50, 100), factor(100)); // asserts that two expressions are equal to each other
    assertEquals(Arrays.asList(1, 101), factor(101));
  }

  public static List<Integer> factor(int num) {
    List<Integer> factors = new ArrayList<>(); // creates a new vector for the factors of the number

    for (int i = 1; i <= Math.sqrt(num) + 1; i++) {
      if (num % i == 0) {
        factors.add(i); // pushes smallest factor to factors
        factors.add(num/i); // pushes largest factor to factors
      }
    }
    Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
  }
}
```
Note that in Java, the `sqrt` method is used to compute the square root of a number, and the `Math` class is imported to access it. The `List` interface is also used instead of the `Vec` type in Rust.
