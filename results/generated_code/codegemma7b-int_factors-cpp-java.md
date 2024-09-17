```java
import java.util.Arrays;
import java.util.Vector;

public class FactorGenerator {

    public static Vector<Integer> generateFactors(int n) {
        Vector<Integer> factors = new Vector<>();
        factors.add(1);
        factors.add(n);

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                factors.add(i);
                if (i * i != n)
                    factors.add(n / i);
            }
        }

        Arrays.sort(factors.toArray());
        return factors;
    }

    public static void main(String[] args) {
        int[] sampleNumbers = { 3135, 45, 60, 81 };

        for (int number : sampleNumbers) {
            Vector<Integer> factors = generateFactors(number);
            System.out.println("Factors of " + number + " are: " + factors);
        }
    }
}
```
