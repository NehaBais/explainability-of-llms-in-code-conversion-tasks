import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class FactorCalculator {
  public static List<Integer> factor(int n) {
    List<Integer> factors1 = new ArrayList<>();
    List<Integer> factors2 = new ArrayList<>();

    for (int x = 1; x * x < n; x++) {
      if (n % x == 0) {
        factors1.add(x);
        factors2.add(n / x);
      }
    }

    int x = (int) Math.sqrt(n);
    if (x * x == n) {
      factors1.add(x);
    }

    Collections.reverse(factors2);
    factors1.addAll(factors2);

    return factors1;
  }

  public static void main(String[] args) {
    int[] numbers = {45, 53, 64};
    for (int i : numbers) {
      System.out.println(i + ": factors: " + factor(i));
    }
  }
}
