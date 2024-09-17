This is a simplified version of the Golang code that prints all factors for a given number. It uses a mathematical approach to factorize a number by repeatedly dividing it by prime numbers until no more factors are found. The resulting factors are stored in an array and later printed out. 

The following Java code demonstrates the same functionality:
```java
import java.util.*;
public class Factorization {
    public static void main(String[] args) {
        printFactors(-1);
        printFactors(0);
        printFactors(1);
        printFactors(2);
        printFactors(3);
        printFactors(53);
        printFactors(45);
        printFactors(64);
        printFactors(600851475143L); // Note: long data type is used to store large numbers 
        printFactors(999999999999999989L);
    }
    
    public static void printFactors(long nr) {
        if (nr < 1) {
            System.out.printf("
Factors of %d not computed\n", nr);
            return;
        }
        System.out.printf("
Factors of %d: ", nr);
        List<Long> factors = new ArrayList<>();
        factors.add(1L);
        for (long p = 2; ; ++p) {
            if ((nr/p)*p == nr) {
                long e = 0;
                while (nr%p == 0) {
                    ++e;
                    nr /= p;
                }
                addPowerFactors(factors, p, e);
            }
            if (nr <= 1) break;
        }
        System.out.println(factors);
        System.out.printf("Number of factors = %d\n", factors.size());
    }
    
    private static void addPowerFactors(List<Long> factors, long p, int e) {
        for (int i = 0; i <= e; ++i) {
            int pp = (int)Math.pow(p, i); // Note: int data type is used to store large powers 
            for (long f : factors) {
                factors.add((long)(f * pp));
            }
        }
    }
}
```
In the Java code, we first check if the number is less than 1 and print an error message if it's true. Then, we create a `List` to store all factors of the given number. 

The main algorithm is based on the mathematical concept of factorization. We start by iterating through each odd prime number from 2 until we find one that evenly divides the given number. After finding such a divisor, we repeat this process with the quotient obtained from the division and add it to our `List`. 

The `addPowerFactors` method adds all possible combinations of powers of the current prime number to our factors list by iterating through the exponents from 0 to the current exponent. This allows us to cover all factors of the given number, even if they are very large. 

Finally, we print out the computed factors and count their total number using `factors.size()`.
