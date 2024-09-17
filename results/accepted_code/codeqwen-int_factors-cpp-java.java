import java.util.*;

public class Main {
  static List<Integer> generateFactors(int n) {
    List<Integer> factors = new ArrayList<>();
    factors.add(1);
    factors.add(n);
    for (int i = 2; i * i <= n; ++i) {
      if (n % i == 0) {
        factors.add(i);
        if (i * i != n) factors.add(n / i);
      }
    }

    Collections.sort(factors);
    return factors;
  }

  public static void main(String[] args) {
    final int[] SampleNumbers = {3135, 45, 60, 81};

    for (int i : SampleNumbers) {
      List<Integer> factors = generateFactors(i);
      System.out.print("Factors of ");
      System.out.printf("%4d are: ", i);
      factors.forEach(x -> System.out.print(x + " "));
      System.out.println();
    }
  }
}
