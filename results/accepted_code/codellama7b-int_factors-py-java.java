import java.math.*;
import java.util.Arrays;

public class Factor {
  public static void main(String[] args) {
    int n = 45; // Number to be factored
    System.out.println("Factors of " + n + ": ");
    factor(n);
  }

  public static void factor(int n) {
    int factors1[] = new int[2];
    int factors2[] = new int[2];
    for (int x = 1; x < Math.sqrt(n); x++) {
      if (n % x == 0) {
        factors1[0] = x;
        factors1[1] = n / x;
        break;
      }
    }
    int y = 1;
    while (y * y <= n) {
      if (y * y == n) {
        factors2[0] = y;
        factors2[1] = 1;
        break;
      } else {
        y++;
      }
    }
    Arrays.sort(factors1);
    System.out.println("Factors of " + n + ": ");
    for (int f : factors1) {
      System.out.print(f + " ");
    }
    System.out.println();
  }
}
