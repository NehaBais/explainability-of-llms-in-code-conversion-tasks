import static java.lang.Math.sqrt;

import java.util.*;

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
    int[] SampleNumbers = {3135, 45, 60, 81};
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
