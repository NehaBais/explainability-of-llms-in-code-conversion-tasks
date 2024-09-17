import java.util.*;

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
    printFactors(600851475143L);
    printFactors(999999999999999989L);
  }

  static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }

    System.out.printf("Factors of %d: ", nr);
    Deque<Long> fs = new ArrayDeque<>();
    fs.add(1L);

    int e = 0;
    for (; nr % 2 == 0; e++) {
      nr >>= 1;
    }

    long d = 3, pp = 1;
    while (d * d <= nr) {
      if (nr % d == 0) {
        for (int i = 0; i < e; i++, pp *= d) {
          fs.add(pp);
        }
        nr /= d;
        e++;
      } else {
        d += 2;
      }
    }

    if (nr > 1) {
      for (int i = 0; i < e; i++, pp *= nr) {
        fs.add(pp);
      }
    }

    System.out.println(fs);
    System.out.println("Number of factors = " + fs.size());
  }
}
