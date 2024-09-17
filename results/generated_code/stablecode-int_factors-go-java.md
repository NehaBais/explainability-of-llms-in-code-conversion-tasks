Here is the equivalent Java code for your GoLang code:

```java
import java.util.*;

public class Main {

  static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    List<Long> fs = new ArrayList<>();
    fs.add(1L));

    for (int d = 3; nr > 1; d += 2) {
      if (d * d > nr) {
        d = (int)nr;
      }
      long mult = 1;
      while (nr % d == 0) {
        fs.add(mult*d));
        mult *= d;
        nr /= d;
      }
    }
    Collections.sort(fs, Comparator.reverseOrder()));

    System.out.println("Factors of " + nr + ": " + fs);
    System.out.println("Number of factors = " + (fs == null ? 0 : fs.size()))) ;
  }

  public static void main(String[] args) {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143);
    printFactors(99999999999999989);
  }

}
```
The converted code from Golang to Java follows the same logic and structure as your original GoLang code.
