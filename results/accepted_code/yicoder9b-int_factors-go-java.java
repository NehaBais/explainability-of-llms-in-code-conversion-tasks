import java.util.ArrayList;
import java.util.List;

public class Main {
  public static void main(String[] args) {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    //      printFactors(600851475143);   - this number is too large for the factor calculation
    // method used here.
    //      printFactors(999999999999999989); - this number is prime and has only two factors: 1 and
    // itself.
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    List<Long> factors = new ArrayList<Long>();
    factors.add((long) 1);

    int e = 0;
    while (nr % 2 == 0) {
      e++;
      nr >>= 1;
    }
    appendFactors(2, e, factors);
    for (long d = 3; nr > 1 && d * d <= nr; d += 2) {
      e = 0;
      while (nr % d == 0) {
        nr /= d;
        e++;
      }
      if (e > 0) {
        appendFactors(d, e, factors);
      }
    }
    System.out.println("Factors of " + nr + ": " + factors);
    System.out.println("Number of factors = " + factors.size());
  }

  private static void appendFactors(long p, int e, List<Long> fs) {
    int initialSize = fs.size();
    for (int i = 0; i < e; i++) {
      p *= p;
      for (int j = 0; j < initialSize; j++) {
        fs.add(p * fs.get(j));
      }
    }
  }
}
