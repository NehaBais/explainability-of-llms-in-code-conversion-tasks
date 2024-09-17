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
