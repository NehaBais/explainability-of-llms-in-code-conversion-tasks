Here is the Java equivalent of your Python code:

```java
import java.util.ArrayList;
import java.util.List;

public class Main {
    
    public static List<Integer> factor(int n) {
        List<Integer> factors1 = new ArrayList<>();
        for (int x = 1; x <= Math.sqrt(n); x++) {
            if (n % x == 0) {
                factors1.add(x);
                factors1.add(n / x);
            }
        }
        int x = n + 1;
        if (x * x == n) {
            factors1.add(x);
        }
        factors1.addAll(factors1.subList(0, factors1.size() / 2));
        return factors1;
    }

    public static void main(String[] args) {
        int[] numbers = {45, 53, 64};
        for (int i : numbers) {
            System.out.printf("%d: factors: %s%n", i, factor(i));
        }
    }    
}
```

Here's a brief explanation of the Java code:

1. The `factor` function in Java takes an integer as input and returns a List of integers.
2. It first creates an empty list called `factors1` to store the factors.
3. It then iterates from 1 to the square root of the input number (using `Math.sqrt(n)`). If `n % x == 0`, it adds both `x` and `n/x` to `factors1`.
4. After the loop, if `x * x == n`, it adds `x` to `factors1`.
5. It then reverses the elements in `factors1` (using the sublist method) and appends them to `factors1` again.
6. Finally, the function returns `factors1`.

In the `main` method, we test the `factor` function with three integers: 45, 53, and 64.
