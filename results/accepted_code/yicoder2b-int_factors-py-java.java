import java.util.*;

class Main {
  static List<Integer> factor(int n) {
    List<Integer> factors1 = new ArrayList<>(), factors2 = new ArrayList<>();
    for (int x = 1; x <= Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1.add(x);
        factors2.add(n / x);
      }
    }
    Collections.reverse(factors2); // Reverse to get proper descending order
    factors1.addAll(factors2);
    return factors1;
  }

  public static void main(String[] args) {
    for (int i : new int[] {45, 53, 64}) {
      System.out.println("Number: " + i + " Factors: " + factor(i));
    }
  }
}
