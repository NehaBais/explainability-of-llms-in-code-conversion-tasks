import java.util.*;

class Factors {
  int[] list;
  int count;

  public Factors() {
    list = null;
    count = 0;
  }
}

public class FactorCalculator {
  static void xferFactors(Factors fctrs, int[] flist, int flix) {
    int newSize = fctrs.count + flix;
    if (newSize > flix) {
      fctrs.list = Arrays.copyOf(fctrs.list, newSize);
    } else {
      fctrs.list = new int[newSize];
    }
    System.arraycopy(flist, 0, fctrs.list, fctrs.count, flix);
    fctrs.count = newSize;
  }

  static Factors factor(int num) {
    int[] flist = new int[301];
    int flix = 0;
    Factors fctrs = new Factors();
    fctrs.list = null;
    fctrs.count = 0;

    for (int dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0) continue;
      if (flix == 300) {
        xferFactors(fctrs, flist, flix);
        flix = 0;
      }
      flist[flix++] = dvsr;
      flist[flix++] = num / dvsr;
    }
    if (dvsr * dvsr == num) {
      flist[flix++] = dvsr;
    }
    if (flix > 0) {
      xferFactors(fctrs, flist, flix);
    }

    return fctrs;
  }

  public static void main(String[] args) {
    int[] nums2factor = {2059, 223092870, 3135, 45};
    char sep;

    for (int num : nums2factor) {
      Factors ftors = factor(num);
      System.out.print("Factors of " + num + " are: ");
      sep = ' ';
      for (int j = 0; j < ftors.count; j++) {
        System.out.print(sep + ftors.list[j]);
        sep = ',';
      }
      System.out.println();
    }
  }
}
