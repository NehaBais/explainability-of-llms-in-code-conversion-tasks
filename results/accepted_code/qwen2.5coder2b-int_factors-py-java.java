import java.util.ArrayList;
import java.util.List;

public class Main {

  public static List<Integer> factor(int n) {
    List<Integer> factors1 = new ArrayList<>();
    for (int x = 1; x <= Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1.add(x);
        factors1.add(n / x);
      }
    }
    int x = n + 1;
    if (x * x == n) {
      factors1.add(x);
    }
    factors1.addAll(factors1.subList(0, factors1.size() / 2));
    return factors1;
  }

  public static void main(String[] args) {
    int[] numbers = {45, 53, 64};
    for (int i : numbers) {
      System.out.printf("%d: factors: %s%n", i, factor(i));
    }
  }
}
