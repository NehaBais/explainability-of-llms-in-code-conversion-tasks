import java.util.*;

public class FactorsOfANumber {
  public static void main(String[] args) {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143L);
    printFactors(999999999999999989L);
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    List factors = new ArrayList<>();
    factors.add(1L);
    while ((nr & 1) == 0) {
      nr >>= 1;
      factors.add(2L);
    }
    for (long d = 3; d * d <= nr; d += 2) {
      int e = 0;
      while (nr % d == 0) {
        e++;
        nr /= d;
      }
      if (e > 0) {
        List newFactors = new ArrayList<>();
        for (long factor : factors) {
          for (int i = 0; i <= e; i++) {
            newFactors.add(factor * (long) Math.pow(d, i));
          }
        }
        factors = newFactors;
      }
    }
    if (nr > 2) {
      List newFactors = new ArrayList<>();
      for (long factor : factors) {
        newFactors.add(factor * nr);
      }
      factors = newFactors;
    }
    System.out.println("Factors of " + nr + ": " + factors);
    System.out.println("Number of factors: " + factors.size());
  }
}
