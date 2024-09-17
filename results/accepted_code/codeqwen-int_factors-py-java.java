import java.util.*;

public class Main {
  public static void main(String[] args) {
    for (int i : Arrays.asList(45, 53, 64)) {
      System.out.println(i + ": factors: " + factor(i));
    }
  }

  static List<Integer> factor(int n) {
    List<Integer> factors = new ArrayList<>();
    for (int x = 1; x <= Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors.add(x);
      }
    }
    int sqrtN = (int) Math.sqrt(n);
    if (sqrtN * sqrtN == n) {
      factors.add(sqrtN);
    }
    Collections.reverse(factors);
    return factors;
  }
}
