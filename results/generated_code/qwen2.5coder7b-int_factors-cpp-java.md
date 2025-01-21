Here is the Java version of your C++ code:

```java
import java.util.ArrayList;
import java.util.Arrays;

public class Main {

    public static ArrayList<Integer> generateFactors(int n) {
        ArrayList<Integer> factors = new ArrayList<>(Arrays.asList(1, n));
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                factors.add(i);
                if (i * i != n)
                    factors.add(n / i);
            }
        }

        factors.sort(Integer::compareTo);
        return factors;
    }

    public static void main(String[] args) {
        int[] sampleNumbers = {3135, 45, 60, 81};

        for (int i = 0; i < sampleNumbers.length; ++i) {
            ArrayList<Integer> factors = generateFactors(sampleNumbers[i]);
            System.out.printf("Factors of %-4d are: ", sampleNumbers[i]);
            System.out.println(factors.toString().replace("[", "").replace("]", ""));
        }
    }
}
```
This Java code works the same way as your C++ code. It computes all the factors of each number in the `sampleNumbers` array, sorts them, and then prints them out. The main difference is that Java uses ArrayList instead of vector for storing factors, and System.out.printf is used for printing formatted output.
