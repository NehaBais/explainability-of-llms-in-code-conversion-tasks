import java.util.*;

public class FactorGenerator {
  public static List<Integer> generateFactors(int n) {
    List<Integer> factors = new ArrayList<>(Arrays.asList(1, n));
    for (int i = 2; i * i <= n; ++i) {
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
    int[] sampleNumbers = {3135, 45, 60, 81};

    for (int number : sampleNumbers) {
      List<Integer> factors = generateFactors(number);
      System.out.print("Factors of " + String.format("%4d", number) + " are: ");
      for (int factor : factors) {
        System.out.print(factor + " ");
      }
      System.out.println();
    }
  }
}
