import java.util.ArrayList;
import java.util.Collections;

public class Main {

  static ArrayList<Integer> factors(int n) {
    ArrayList<Integer> factors1 = new ArrayList<>();
    ArrayList<Integer> factors2 = new ArrayList<>();

    for (int x = 1; x <= Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1.add(x);
        factors2.add(n / x);
      }
    }

    if (Math.sqrt(n) * Math.sqrt(n) == n) {
      factors1.add((int) Math.sqrt(n));
    }

    Collections.reverse(factors2);

    factors1.addAll(factors2);

    return factors1;
  }

  public static void main(String[] args) {

    int[] nums = {45, 53, 64};

    for (int num : nums) {
      System.out.println(num + ": factors: " + factors(num));
    }
  }
}
