import java.util.*;

public class FactorGenerator {
  public static void main(String[] args) {
    int[] sampleNumbers = {3135, 45, 60, 81};
    for (int i = 0; i < sampleNumbers.length; i++) {
      List factors = generateFactors(sampleNumbers[i]);
      System.out.print("Factors of " + sampleNumbers[i] + " are: ");
      for (int j = 0; j < factors.size(); j++) {
        if (j > 0) {
          System.out.print(", ");
        }
        System.out.print(factors.get(j));
      }
      System.out.println("");
    }
  }

  public static List generateFactors(int n) {
    List factors = new ArrayList();
    factors.add(1);
    factors.add(n);

    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        factors.add(i);
        int otherFactor = n / i;
        if (otherFactor != i) {
          factors.add(otherFactor);
        }
      }
    }

    Collections.sort(factors);
    return factors;
  }
}
