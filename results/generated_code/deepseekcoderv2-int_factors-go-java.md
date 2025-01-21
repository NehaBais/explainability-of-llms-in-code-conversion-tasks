 Sure! Below is the equivalent Java code for the provided Go code that computes the factors of a positive integer:

```java
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
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

    public static void printFactors(long nr) {
        if (nr < 1) {
            System.out.println("Factors of " + nr + " not computed");
            return;
        }
        System.out.print("Factors of " + nr + ": ");
        List<Long> fs = new ArrayList<>();
        fs.add(1L);

        int e = 0;
        while ((nr & 1) == 0) {
            e++;
            nr >>= 1;
        }
        apf(fs, 2, e);

        for (long d = 3; nr > 1; d += 2) {
            if (d * d > nr) {
                d = nr;
            }
            int ee = 0;
            while (nr % d == 0) {
                ee++;
                nr /= d;
            }
            if (ee > 0) {
                apf(fs, d, ee);
            }
        }
        System.out.println(fs);
        System.out.println("Number of factors = " + fs.size());
    }

    public static void apf(List<Long> fs, long p, int e) {
        int n = fs.size();
        for (int i = 0, pp = p; i < e; i++, pp *= p) {
            for (int j = 0; j < n; j++) {
                fs.add(fs.get(j) * pp);
            }
        }
    }
}
```

### Explanation:
1. **Main Method**: The `main` method is similar to the Go code, calling the `printFactors` method with various integers.
2. **printFactors Method**: This method checks if the number is less than 1 and prints a message if it is. Otherwise, it initializes an ArrayList to store factors and starts checking for factors.
3. **apf Method**: This helper method appends new factors to the list based on the prime factor and its exponent.
4. **Factors Calculation**: The main logic follows a similar approach to the Go code:
   - It first finds the number of times 2 divides into the number, updating the number and counting these divisions.
   - Then it checks for odd factors from 3 onwards, updating the list of factors accordingly.
5. **Output**: Finally, it prints the list of factors and their count.

This Java code should behave similarly to the provided Go code for computing the factors of a positive integer.
