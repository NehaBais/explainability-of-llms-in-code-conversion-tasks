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
    printFactors(999999999999999989L); // note the L at the end to denote this is a long integer.
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    ArrayList<Long> fs = new ArrayList<>(); // use an ArrayList instead of a slice to store factors
    fs.add(1L); // add 1 and the number itself as factors by default
    long apf = nr; // this will hold the product of prime factor and its exponent

    for (long d = 2; d <= nr / d; d++) {
      if (nr % d == 0) {
        fs.add(d);
        while (nr % d == 0) {
          apf = d * apf; // update the product of prime factor and its exponent
          nr /= d;
        }
      }
    }
    if (nr > 1) {
      fs.add(nr);
      apf = nr * apf;
    }
    System.out.println("Factors of " + apf + ": " + fs);
    System.out.println("Number of factors = " + fs.size());
  }
}
