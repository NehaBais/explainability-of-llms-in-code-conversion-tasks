import java.util.ArrayList;
import java.util.Collections;

public class Main {
  public static ArrayList<Integer> factor(int n) {
    ArrayList<Integer> factors1 = new ArrayList<>();
    ArrayList<Integer> factors2 = new ArrayList<>();

    for (int x = 1; x <= Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1.add(x);
        factors2.add(n / x);
      }
    }

    Collections.reverse(factors2);
    factors1.addAll(factors2);

    return factors1;
  }

  public static void main(String[] args) {
    int[] numbers = {45, 53, 64};

    for (int number : numbers) {
      System.out.printf("%d: factors: %s\n", number, factor(number));
    }
  }
}
