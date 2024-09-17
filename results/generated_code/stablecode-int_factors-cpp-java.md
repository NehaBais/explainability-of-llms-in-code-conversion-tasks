Below is the equivalent Java code for the given C++ code:

```java
import java.util.*;
import java.io.*;

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

    public static void main(String[] args) throws IOException {
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
This Java code does exactly the same as your C++ code; it computes the factors of a positive integer by checking each number up to its square root, and then adding any factors found. The results are then sorted and printed out to the console.
