Here is the equivalent Java code for the given Python code.

The code basically finds all the factors of a number. Here's the Java code equivalent to your provided Python code:

```java
import java.util.*;
import java.math.*;

public class Main {
    static int getFactor(int n) {
        List<Integer> factors = new ArrayList<>();

        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                factors.add(i);
                factors.add(n / i);
            }
        }

        Collections.sort(factors, new Comparator<Integer>() {
            public int compare(Integer a, Integer b) {
                return a - b;
            }
        }));

        int maxFactor = factors.get(0));

        for (int factor : factors) {
            if (factor > maxFactor) {
                maxFactor = factor;
            }
        }

        return maxFactor;
    }

    public static void main(String[] args) {
        System.out.println("45: factors: " + getFactor(45)));
        System.out.println("53: factors: " + getFactor(53)));
        System.out.println("64: factors: " + getFactor(64)));
    }
}
```
This Java code does the same as your Python code - it computes and prints out the factors of a positive integer for given numbers 45, 53, 64. The `getFactor` function returns the maximum factor found in the list 'factors'. The `main` method then prints out these factors for each number.
