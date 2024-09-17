Answer: 
In Java, we can use the same logic as in C++ to find the factors of a positive integer. We create an empty vector called `factors` and initialize it with two elements: 1 and n. Then, we loop through all the integers from 2 up to the square root of n. If i is a factor of n (i.e., n % i == 0), then we add both i and n / i to the vector factors. Finally, we sort the vector factors in ascending order using the std::sort function.

We also use the `std::cout` object from the Java standard library to print out the factors of each number. The width is set with the `std::cout.width(4)` method and then the actual values are printed using the iterator for integers, which uses a space character as the separator between numbers.
####
The conversion from C++ code to Java code would be:
```
import java.util.*;
import static java.lang.Math.sqrt;

public class Main {
    public static Vector<Integer> GenerateFactors(int n) {
        Vector<Integer> factors = new Vector<>(2);
        factors.add(1);
        factors.add(n);
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                factors.add(i);
                if (i * i != n) {
                    factors.add(n / i);
                }
            }
        }
        Collections.sort(factors);
        return factors;
    }
    
    public static void main(String[] args) {
        int[] SampleNumbers = { 3135, 45, 60, 81 };
        for (int i = 0; i < SampleNumbers.length; ++i) {
            Vector<Integer> factors = GenerateFactors(SampleNumbers[i]);
            System.out.printf("Factors of %d are: ", SampleNumbers[i]);
            for (int factor : factors) {
                System.out.print(factor + " ");
            }
            System.out.println();
        }
    }
}
```