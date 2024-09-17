Here is the Java version of your C++ code:

```java
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Main {
    static List<Integer> generateFactors(int n) {
        List<Integer> factors = new ArrayList<>();
        factors.add(1);
        factors.add(n);
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                factors.add(i);
                if (i * i != n)
                    factors.add(n / i);
            }
        }

        Collections.sort(factors);
        return factors;
    }

    public static void main(String[] args) {
        final int[] SampleNumbers = { 3135, 45, 60, 81 };

        for (int i : SampleNumbers) {
            List<Integer> factors = generateFactors(i);
            System.out.print("Factors of ");
            System.out.printf("%4d are: ", i);
            factors.forEach(x -> System.out.print(x + " "));
            System.out.println();
        }
    }
}
```

This Java code does exactly the same thing as your C++ code. It generates a list of factors for each number in `SampleNumbers`, sorts it, and prints out the result. The main difference is how lists are used instead of vectors in C++. Also note that we use `System.out.printf` to align numbers with the same width like in your C++ code.
