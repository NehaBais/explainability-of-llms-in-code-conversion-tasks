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
    printFactors(600851475143L);
    printFactors(999999999999999989L);
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("Factors of " + nr + " not computed");
      return;
    }
    System.out.print("
 Factors of " + nr + ": ");
    List<Long> fs = new ArrayList<>();
    fs.add(1L);
    printFactors(nr, fs, 2L);
    Collections.sort(fs);
    for (Long f : fs) {
      System.out.println(f);
    }
    System.out.println("Number of factors = " + fs.size());
  }

  private static void printFactors(long nr, List<Long> fs, long d) {
    if (nr % d == 0) {
      fs.add(d);
      printFactors(nr / d, fs, d);
    } else if (d * d <= nr) {
      printFactors(nr, fs, d + 2);
    }
  }
}