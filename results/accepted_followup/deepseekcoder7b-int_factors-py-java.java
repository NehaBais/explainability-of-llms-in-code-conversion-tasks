import java.util.*;

public class Main {
  public static void main(String[] args) {
    for (int i : new int[] {45, 53, 64}) {
      System.out.printf("%d: factors: %s%n", i, Arrays.toString(factor(i).toArray()));
    }
  }

  public static List<Integer> factor(int n) {
    ArrayList<Integer> factors1 = new ArrayList<>(), factors2 = new ArrayList<>();
    for (int x = 1; x <= Math.sqrt(n); ++x) {
      if (n % x == 0) {
        factors1.add(x);
        factors2.add(n / x);
      }
    }
    int y = (int) Math.sqrt(n);
    if (y * y == n) {
      factors1.add(y);
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    return factors1;
  }
}
