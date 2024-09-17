import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {
  public static List<Integer> generateFactors(int n) {
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
    int[] SampleNumbers = {3135, 45, 60, 81};

    for (int i = 0; i < SampleNumbers.length; ++i) {
      List<Integer> factors = generateFactors(SampleNumbers[i]);
      System.out.print("Factors of ");
      System.out.printf("%4d", SampleNumbers[i]);
      System.out.println(" are: " + factors);
    }
  }
}
