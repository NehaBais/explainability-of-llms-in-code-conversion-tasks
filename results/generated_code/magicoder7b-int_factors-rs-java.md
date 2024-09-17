 Here is a Java version of your Rust code:

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
        for(int i = 1; i < endRange; i++) {
            if(num % i == 0) { // checks if current integer can divide num without any remainder
                factors.add(i); // adds smallest factor to factors
                factors.add(num/i); // adds largest factor to factors
            }
        }
        Collections.sort(factors); // sorts the factors into numerical order for viewing purposes
        return factors; // returns the factors
    }
}
```
This Java code works in a similar way as your Rust one, but note that we are using `java.util.ArrayList` instead of `Vec`, and `Arrays.asList()` instead of `vec![]`. Also, for checking equality with arrays, we can use the `assertEquals()` method from JUnit library.
