import java.util.ArrayList;
import java.util.Collections;

public class Factorizer {
  public static ArrayList generateFactors(int n) {
    ArrayList factors = new ArrayList<>();
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
      ArrayList factors = generateFactors(num);
      System.out.println("Factors of " + num + ":");
      for (int factor : factors) {
        System.out.print(factor + " ");
      }
      System.out.println();
    }
  }
}
