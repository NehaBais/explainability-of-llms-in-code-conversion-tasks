import java.util.*;

public class Factorizer {
  public static List getFactors(int n) {
    List factors = new ArrayList<>();
    for (int x = 1; x * x <= n; x++) {
      if (n % x == 0) {
        factors.add(x);
        factors.add(n / x);
      }
    }
    int sqrtN = (int) Math.sqrt(n);
    for (int x = sqrtN + 1; x <= n; x++) {
      if (n % x == 0) {
        factors.add(x);
        factors.add(n / x);
      }
    }
    Collections.reverse(factors);
    return factors;
  }

  public static void main(String[] args) {
    Map data = new HashMap<>();
    data.put(45, getFactors(45));
    data.put(53, getFactors(53));
    data.put(64, getFactors(64));
    for (Map.Entry entry : data.entrySet()) {
      System.out.println(entry.getKey() + ": factors: " + entry.getValue());
    }
  }
}
