Here is the equivalent Java code for your C++ program: 

```java
import java.util.*;

class Main {
  public static void main(String[] args) {
    int[] SampleNumbers = {3135, 45, 60, 81};

    for (int i = 0; i < SampleNumbers.length; ++i) {
      ArrayList<Integer> factors = GenerateFactors(SampleNumbers[i]);
      System.out.print("Factors of ");
      System.out.printf("%4d", SampleNumbers[i]);
      System.out.print(" are: " + factors);
      System.out.println();
    }
  }

  public static ArrayList<Integer> GenerateFactors(int n) {
    ArrayList<Integer> factors = new ArrayList<Integer>();
    for (int i = 1; i * i <= n; ++i) {
      if (n % i == 0) {
        factors.add(i);
        if (i * i != n)
          factors.add(n / i);
      }
    }

    Collections.sort(factors);
    return factors;
  }
}
```

In this Java code, we create an ArrayList to store the factors instead of a vector in C++. The `GenerateFactors` method is almost identical to its C++ counterpart but since it returns an `ArrayList<Integer>` and not a `vector<int>`, the print statement also needed to be adjusted accordingly.
