import java.util.*;

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
    int[] sampleNumbers = new int[] {3135, 45, 60, 81};

    for (int i = 0; i < sampleNumbers.length; ++i) {
      List<Integer> factors = generateFactors(sampleNumbers[i]);
      System.out.print("Factors of ");
      System.out.printf("%4d are: ", sampleNumbers[i]);

      Iterator<Integer> it = factors.iterator();
      while (it.hasNext()) {
        System.out.print(it.next());
        if (it.hasNext()) System.out.print("  ");
      }
      System.out.println();
    }
  }
}
