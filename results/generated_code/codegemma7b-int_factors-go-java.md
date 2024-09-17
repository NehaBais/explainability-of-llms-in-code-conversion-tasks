```java
import java.util.ArrayList;
import java.util.List;

public class Factorial {

    public static void main(String[] args) {
        printFactors(-1);
        printFactors(0);
        printFactors(1);
        printFactors(2);
        printFactors(3);
        printFactors(53);
        printFactors(45);
        printFactors(64);
        printFactors(600851475143L);
        printFactors(999999999999999989L);
    }

    private static void printFactors(long nr) {
        if (nr < 1) {
            System.out.println("Factors of " + nr + " not computed");
            return;
        }

        System.out.print("Factors of " + nr + ": ");

        List<Long> factors = new ArrayList<>();
        factors.add(1L);

        // Handle even factors
        int evenCount = 0;
        while (nr % 2 == 0) {
            evenCount++;
            nr >>= 1;
        }
        appendFactors(factors, 2, evenCount);

        // Handle odd factors
        long divisor = 3;
        while (nr > 1) {
            int factorCount = 0;
            while (nr % divisor == 0) {
                factorCount++;
                nr /= divisor;
            }
            appendFactors(factors, divisor, factorCount);
            divisor += 2;
        }

        System.out.println(factors);
        System.out.println("Number of factors = " + factors.size());
    }

    private static void appendFactors(List<Long> factors, long factor, int count) {
        for (int i = 0; i < count; i++) {
            int size = factors.size();
            for (int j = 0; j < size; j++) {
                factors.add(factors.get(j) * factor);
            }
        }
    }
}
```


