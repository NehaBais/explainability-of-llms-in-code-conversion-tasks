The error is caused by missing semicolons at the end of lines that add elements to the `factors` vector. The fix involves adding semicolons at the end.

The entire corrected code block is as follows:
```java
import java.util.*;

public class FactorGenerator {

    private static Vector<Integer> generateFactors(int n) {
        Vector<Integer> factors = new Vector<>();
        factors.add(1);
        if (n > 1) factors.add(n);
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                factors.add(i);
                if (i * i != n)
                    factors.add(n / i));
                }
            }
        Collections.sort(factors);
        return factors;
    }

    public static void main(String[] args) {
        int[] sampleNumbers = new int[]{31345, 45, 60, 81};

        for (int i = 0; i < sampleNumbers.length; ++i) {
            Vector<Integer> factors = generateFactors(sampleNumbers[i]));
            System.out.println("Factors of " + 
            sampleNumbers[i] + " are: " + 
            factors);
        }
    }
}
```
