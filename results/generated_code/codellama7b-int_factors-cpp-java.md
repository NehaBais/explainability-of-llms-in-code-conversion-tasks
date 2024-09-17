This is a C++ program that computes the factors of a positive integer. Here's the equivalent Java code:
```java
import java.util.*;

public class Factorization {
  public static void main(String[] args) {
    int[] sampleNumbers = {3135, 45, 60, 81};
    
    for (int i = 0; i < sampleNumbers.length; i++) {
      int n = sampleNumbers[i];
      List<Integer> factors = new ArrayList<>();
      factors.add(1);
      factors.add(n);
      
      for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
          factors.add(i);
          if (i * i != n) {
            factors.add(n / i);
          }
        }
      }
      
      System.out.println("Factors of " + n + ":");
      for (int factor : factors) {
        System.out.print(factor + " ");
      }
      System.out.println();
    }
  }
}
```
Note that in Java, we use the `List` data structure to store the factors instead of a vector. We also use the `ArrayList` class to create an empty list and add elements to it. The `for` loop iterates over the sample numbers and computes the factors for each number using the same algorithm as in the C++ program. Finally, we print the factors using a `for` loop over the elements of the list.
