Here is the Java version of your Python code. This Java version uses for-loop to iterate over numbers up to square root of input number, checks if current number divides the input number and adds it to the list if true. After that it checks if number * number equals the input number (i.e., if it's a perfect square), if true it adds that number as a factor. Finally, it reverses the second part of the factors list and concatenates it with first part.

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        for (int i : Arrays.asList(45, 53, 64)) {
            System.out.println(i + ": factors: " + factor(i));
        }
    }

    static List<Integer> factor(int n) {
        List<Integer> factors = new ArrayList<>();
        for (int x = 1; x <= Math.sqrt(n); x++) {
            if (n % x == 0) {
                factors.add(x);
            }
        }
        int sqrtN = (int)Math.sqrt(n);
        if (sqrtN * sqrtN == n) {
            factors.add(sqrtN);
        }
        Collections.reverse(factors);
        return factors;
    }
}
```

Please note that Java doesn't have a built-in function to get the square root of an integer, so we use the Math.sqrt method from java.lang package instead. The reverse operation is performed by using Collections.reverse method which modifies the list in place.
