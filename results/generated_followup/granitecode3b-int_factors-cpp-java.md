The error is caused by the fact that the `generateFactors()` method returns an ArrayList of integers, but the code tries to iterate over it using a for-each loop with an int variable. The compiler doesn't know that the ArrayList contains Integers, so it throws an incompatible types exception.
To fix this, you can change the return type of the `generateFactors()` method from `ArrayList` to `List<Integer>`. This will make the code compile without errors.
Here's the corrected code:
```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Factorizer {
  public static List generateFactors(int n) {
    List factors = new ArrayList<>();
    for (int i = 1; i <= Math.sqrt(n); i++) {
      if (n % i == 0) {
        factors.add(i);
        if (i != n / i) {
          factors.add(n / i);
        }
      }
    }
    Collections.sort(factors);
    return factors;
  }

  public static void main(String[] args) {
    int[] sampleNumbers = {3135, 45, 60, 81};
    for (int num : sampleNumbers) {
      List factors = generateFactors(num);
      System.out.println("Factors of " + num + ":");
      for (int factor : factors) {
        System.out.print(factor + " ");
      }
      System.out.println();
    }
  }
}
``` 
The corrected code uses a `for-each` loop to iterate over the elements of the List returned by the `generateFactors()` method, and prints out each factor on a separate line.

