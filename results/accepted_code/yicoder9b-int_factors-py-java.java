import java.util.*;

public class Main {
  static ArrayList<Integer> factor(int n) {
    ArrayList<Integer> factors1 = new ArrayList<Integer>();
    ArrayList<Integer> factors2 = new ArrayList<Integer>();
    for (int x = 1; x <= Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1.add(x);
        if (x * x
            != n) // condition to avoid duplicate when sqrt is factor of number e.g. for 45 it's 9
        factors2.add(n / x);
      }
    }
    Collections.reverse(factors2);
    factors1.addAll(factors2);
    return factors1;
  }

  public static void main(String[] args) {
    for (int i : new int[] {45, 53, 64}) { // iterate over multiple numbers at once
      System.out.println(i + ": factors: " + factor(i));
    }
  }
}
