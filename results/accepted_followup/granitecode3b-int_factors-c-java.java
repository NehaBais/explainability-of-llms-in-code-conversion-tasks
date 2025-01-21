import java.util.*;

public class Factors {
  public static void main(String[] args) {
    int[] nums2factor = {2059, 223092870, 3135, 45};
    List[] factors = new ArrayList[nums2factor.length];

    for (int i = 0; i < nums2factor.length; i++) {
      factors[i] = new ArrayList<>();
      factor(nums2factor[i], factors[i]);
      System.out.println("Factors of " + nums2factor[i] + ":");
      for (Integer f : factors[i]) {
        System.out.print(f + ", ");
      }
      System.out.println();
    }
  }

  public static void factor(int num, List factors) {
    Set primes = new TreeSet<>();
    int divisor = 2;
    while (num > 1) {
      if (num % divisor == 0) {
        primes.add(divisor);
        num /= divisor;
      } else {
        divisor++;
      }
    }

    for (int prime : primes) {
      factors.add(new Integer(prime));
    }
    factors.add(new Integer(num));
  }
}
