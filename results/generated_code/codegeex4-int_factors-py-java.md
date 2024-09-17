Below is the equivalent Java code:

```java
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static ArrayList<Integer> factor(int n) {
        ArrayList<Integer> factors1 = new ArrayList<>();
        ArrayList<Integer> factors2 = new ArrayList<>();

        for (int x = 1; x <= Math.sqrt(n); x++) {
            if (n % x == 0) {
                factors1.add(x);
                factors2.add(n / x);
            }
        }

        Collections.reverse(factors2);
        factors1.addAll(factors2);

        return factors1;
    }

    public static void main(String[] args) {
        int[] numbers = {45, 53, 64};

        for (int number : numbers) {
            System.out.printf("%d: factors: %s\n", number, factor(number));
        }
    }
}
```

This Java code does essentially the same as the Python one. It creates an `ArrayList` of factors and then uses a for-loop to iterate over all numbers up to the square root of `n`. If a number divides evenly into `n`, it is added to both lists, `factors1` and `factors2`.

After the loop, `factors2` is reversed and its elements are added to `factors1`. The result is then returned.

In the main method, an array of numbers is iterated over. For each number, a formatted string is printed that includes the number and the factors calculated by the `factor` method.
