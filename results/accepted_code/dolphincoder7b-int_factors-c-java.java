import java.util.*;

class Main {

  static class Factors {
    int[] list;
    short count;

    public Factors() {
      this.list = new int[301];
      this.count = 0;
    }
  }

  static void xferFactors(Factors fctrs, int[] flist, int flix) {
    int ix, ij;
    int newSize = fctrs.count + flix;

    if (newSize > flix) {
      fctrs.list = Arrays.copyOf(fctrs.list, newSize);
    } else {
      fctrs.list = new int[newSize];
    }

    for (ij = 0, ix = fctrs.count; ix < newSize; ij++, ix++) {
      fctrs.list[ix] = flist[ij];
    }
    fctrs.count = (short) newSize;
  }

  static Factors factor(int num, Factors fctrs) {
    int[] flist = new int[301];
    int dvsr, flix = 0;

    fctrs.count = 0;
    if (fctrs.list != null) {
      Arrays.fill(fctrs.list, Integer.MAX_VALUE);
    }

    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0) continue;

      if (flix == 300) {
        xferFactors(fctrs, flist, flix);
        flix = 0;
      }
      flist[flix++] = dvsr;
      flist[flix++] = num / dvsr;
    }

    if (dvsr * dvsr == num) flist[flix++] = dvsr;

    if (flix > 0) xferFactors(fctrs, flist, flix);

    return fctrs;
  }

  public static void main(String[] args) {
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();
    char sep;

    for (int i = 0; i < 4; i++) {
      factor(nums2factor[i], ftors);

      System.out.println("factors of " + nums2factor[i] + ":");

      sep = ' ';
      for (int j = 0; j < ftors.count; j++) {
        System.out.print(sep + ftors.list[j]);
        sep = ',';
      }

      System.out.println();
    }
  }
}
