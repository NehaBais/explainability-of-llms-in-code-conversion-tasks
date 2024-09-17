In Java, we can use the following code to compute the factors of a positive integer:
```
import java.util.*;

public class Factorization {
  public static void main(String[] args) {
    int number = 53; // Change this to any positive integer you want to factorize
    List<Integer> factors = getFactors(number);
    System.out.println("Factors of " + number + ":");
    for (int i = 0; i < factors.size(); i++) {
      System.out.print(factors.get(i) + " ");
    }
    System.out.println("\nNumber of factors: " + factors.size());
  }
  
  public static List<Integer> getFactors(int n) {
    if (n < 1) {
      throw new IllegalArgumentException("Number must be positive");
    }
    
    List<Integer> factors = new ArrayList<>();
    factors.add(1); // Add 1 as a factor by default
    
    // Find all the prime factors of n
    for (int i = 2; i <= Math.sqrt(n); i++) {
      while (n % i == 0) {
        factors.add(i); // Add each prime factor to the list of factors
        n /= i;
      }
    }
    
    // If n is not a perfect square, add it as a factor
    if (Math.sqrt(n) != (int) Math.sqrt(n)) {
      factors.add(n);
    }
    
    return factors;
  }
}
```
This code uses the same approach as the Go code to find the prime factors of a positive integer, and then adds them to a list of factors that is returned by the `getFactors` method. The `main` method demonstrates how to use this method by calling it with different inputs and printing the results.

Note that in Java, we can't use the `&` operator to perform bitwise AND operations on integers like we can in Go. Instead, we use the `%` operator to check if a number is divisible by another number, and the `/=` operator to divide a number by another number and assign the result back to the original number. We also use the `Math.sqrt` method to compute the square root of a number, which returns a double value that we then cast to an integer using `(int)`.
