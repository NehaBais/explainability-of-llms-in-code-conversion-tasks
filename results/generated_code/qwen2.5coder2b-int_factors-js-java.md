In Java, the code would look like this:

```java
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static ArrayList<Integer> factors(int num) {
        ArrayList<Integer> n_factors = new ArrayList<>();
        for (int i = 1; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                n_factors.add(i);
                if (num / i != i)
                    n_factors.add(num / i);
            }
        }
        Collections.sort(n_factors);
        return n_factors;
    }

    public static void main(String[] args) {
        System.out.println(factors(45)); // [1, 3, 5, 9, 15, 45]
        System.out.println(factors(53)); // [1, 53]
        System.out.println(factors(64)); // [1, 2, 4, 8, 16, 32, 64]
    }
}
```

In this Java code, we first import the necessary class `ArrayList` and `Collections`. Then, we define a static method `factors(int num)` that accepts an integer as input. Inside the method, we initialize an empty `ArrayList<Integer>` to store the factors of the given number.

We then use a for loop to iterate from 1 to `int)Math.sqrt(num)`, which ensures that if `num` is divisible by `i`, it will be added twice (once for `i` and once for `num/i`). After checking if `num` is divisible by `i`, we add `num/i` to the list of factors.

We then sort the list using the `Collections.sort()` method. Finally, we return the sorted list of factors.

In the `main()` method, we call the `factors(int num)` method with different numbers and print out the results.
