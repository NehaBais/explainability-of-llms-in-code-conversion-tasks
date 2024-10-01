import java.util.*;

public class Main {

  static class Factors {
    int[] list = new int[301];
    short count;

    Factors() {
      count = 0;
    }
  }

  static Factors factor(int num, Factors fctrs) {
    int flist[] = new int[301], flix;
    boolean isPrime[] = new boolean[256];
    Arrays.fill(isPrime, true);
    for (int i = 2; i * i <= num; ++i) {
      if (!isPrime[i]) continue;
      for (int j = i * i; j <= num; j += i) {
        isPrime[j] = false;
      }
    }
    flix = 0;
    fctrs.count = 0;
    flist[flix++] = 1;
    flist[flix++] = num;
    for (int dvsr = 2; dvsr <= num / 2 + 1; ++dvsr) {
      if (num % dvsr == 0 && isPrime[dvsr]) {
        flist[flix++] = dvsr;
        flist[flix++] = num / dvsr;
      }
    }
    if (flix > 0) fctrs.list[fctrs.count++] = num;
    System.arraycopy(flist, 0, fctrs.list, 0, flist.length);
    fctrs.count += flix;
    return fctrs;
  }

  public static void main(String[] args) {
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();
    char sep;
    for (int i = 0; i < 4; ++i) {
      factor(nums2factor[i], ftors);
      System.out.printf("\nfactors of %d are: ", nums2factor[i]);
      sep = ' ';
      for (int j = 0; j < ftors.count; ++j) {
        System.out.printf("%c %d", sep, ftors.list[j]);
        sep = ',';
      }
      System.out.print("\n");
    }
  }
}
