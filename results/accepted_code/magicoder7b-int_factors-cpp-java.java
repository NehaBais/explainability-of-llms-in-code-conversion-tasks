import java.util.*;

public class Main {

  public static List<Integer> generateFactors(int n) {
    List<Integer> factors = new ArrayList<>();

    for (int i = 1; i <= Math.sqrt(n); ++i) {
      if (n % i == 0) {
        factors.add(i);

        if (i * i != n) factors.add(n / i);
      }
    }

    Collections.sort(factors);
    return factors;
  }

  public static void main(String[] args) {
    int sampleNumbers[] = {3135, 45, 60, 81};

    for (int i = 0; i < sampleNumbers.length; ++i) {
      List<Integer> factors = generateFactors(sampleNumbers[i]);

      System.out.printf("Factors of %-4d are: ", sampleNumbers[i]);
      for (Integer factor : factors) {
        System.out.print(factor + " ");
      }
      System.out.println();
    }
  }
}
