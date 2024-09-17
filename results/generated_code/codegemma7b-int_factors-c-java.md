```java
import java.util.ArrayList;
import java.util.List;

public class Factorization {

    public static List<Integer> factorize(int num) {
        List<Integer> factors = new ArrayList<>();
        for (int divisor = 1; divisor <= Math.sqrt(num); divisor++) {
            if (num % divisor == 0) {
                factors.add(divisor);
                factors.add(num / divisor);
            }
        }
        return factors;
    }

    public static void main(String[] args) {
        int[] nums2factor = { 2059, 223092870, 3135, 45 };

        for (int num : nums2factor) {
            List<Integer> factors = factorize(num);
            System.out.println("Factors of " + num + " are:");
            for (int factor : factors) {
                System.out.print(factor + " ");
            }
            System.out.println();
        }
    }
}
```

