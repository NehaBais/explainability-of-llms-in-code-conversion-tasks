import java.util.*;

public class Factor {
  public static void main(String[] args) {
    List<Integer> factors = new ArrayList<>();
    for (int i = 0; i <= 10; i++) {
      System.out.println("Factors of " + i + " are:");
      factors.clear(); // To clear list before adding elements for every number.
      getFactors(i, factors);
      for (int num : factors) {
        System.out.print(num + " ");
      }
      System.out.println("\n");
    }
  }

  public static void getFactors(int n, List<Integer> factors) {
    int x = 1;
    while (x * x <= n) {
      if (n % x == 0) {
        // If so, a new factor has been found which is also the other one.
        if (n / x != x) factors.add(n / x); // If it's not equal to x then add another factor.
        else factors.add(x);
      }
      x++;
    }
  }
}
