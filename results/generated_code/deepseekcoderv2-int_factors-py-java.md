 Here's the equivalent Java code for the provided Python script that computes the factors of a positive integer:

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class FactorCalculator {
    public static List<Integer> factor(int n) {
        List<Integer> factors1 = new ArrayList<>();
        List<Integer> factors2 = new ArrayList<>();
        
        for (int x = 1; x * x < n; x++) {
            if (n % x == 0) {
                factors1.add(x);
                factors2.add(n / x);
            }
        }
        
        int x = (int) Math.sqrt(n);
        if (x * x == n) {
            factors1.add(x);
        }
        
        Collections.reverse(factors2);
        factors1.addAll(factors2);
        
        return factors1;
    }

    public static void main(String[] args) {
        int[] numbers = {45, 53, 64};
        for (int i : numbers) {
            System.out.println(i + ": factors: " + factor(i));
        }
    }
}
```

This Java code defines a `factor` method that computes the factors of a given positive integer `n`. It uses two lists, `factors1` and `factors2`, to store the factors. The main method tests the `factor` method with the numbers 45, 53, and 64, printing out their factors in the same format as the original Python script.
