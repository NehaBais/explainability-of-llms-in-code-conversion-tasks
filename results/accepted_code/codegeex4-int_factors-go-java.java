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
    printFactors(Long.MAX_VALUE - 9);
  }

  public static void printFactors(long nr) {
    if (nr < 1) {
      System.out.println("\nFactors of " + nr + " not computed");
      return;
    }
    System.out.printf("\nFactors of %d: ", nr);
    List<Long> fs = new ArrayList<>();
    fs.add(1L);
    for (; nr % 2 == 0; nr >>= 1) {
      for (int j : fs) {
        fs.add(j * 2);
      }
    }

    long d = 3;
    while (nr > 1) {
      if (d * d > nr) {
        d = nr;
      } else {
        for (; nr % d == 0; nr /= d) {
          for (int j : fs) {
            fs.add(j * d);
          }
        }
      }
      d += 2;
    }

    System.out.println(fs);
    System.out.println("Number of factors = " + fs.size());
  }
}
