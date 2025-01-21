 The error message indicates that the JUnit library is not found by the compiler. In order to use assertEquals(), we need to import JUnit. The fix would be adding `import org.junit.jupiter.api.*;` at the beginning of your code file.

After the correction, the rewritten Java code looks like this:

```java
import java.util.*;
import static org.junit.jupiter.api.Assertions.*;

class Main {
  public static void main(String[] args) {
    assertEquals(Arrays.asList(1, 2, 4, 5, 10, 10, 20, 25, 50, 100), factor(100)); // asserts that two expressions are equal to each other
    assertEquals(Arrays.asList(1, 101), factor(101));
  }
  
  public static List<Integer> factor(int num) {
    ArrayList<Integer> factors = new ArrayList<>(); // creates a new vector for the factors of the number

    int endRange = (int) Math.ceil(Math.sqrt(num)) + 1;
    for (int i = 1; i < endRange; i++) {
      if (num % i == 0) { // checks if current integer can divide num without any remainder
        factors.add(i); // adds smallest factor to factors
        factors.add(num / i); // adds largest factor to factors
      }
    }
    
    Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
    return factors; // returns the factors
  }
}
```
