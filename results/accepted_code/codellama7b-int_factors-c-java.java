import java.util.*;

public class Main {
  public static void main(String[] args) {
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();
    char sep;
    for (int i = 0; i < 4; i++) {
      factor(nums2factor[i], ftors);
      System.out.printf("factors of %d are:", nums2factor[i]);
      sep = ' ';
      for (int j = 0; j < ftors.count(); j++) {
        System.out.printf("%c %d", sep, ftors.list[j]);
        sep = ',';
      }
      System.out.println("");
    }
  }

  public static void factor(int num, Factors fctrs) {
    int flist[] = new int[301];
    int flix = 0;
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
  }

  public static void xferFactors(Factors fctrs, int[] flist, int flix) {
    int newSize = fctrs.count + flix;
    if (newSize > flix) {
      fctrs.list = Arrays.copyOfRange(fctrs.list, 0, newSize);
    } else {
      fctrs.list = Arrays.copyOf(fctrs.list, newSize);
    }
    for (int ix = fctrs.count; ix < newSize; ix++) {
      fctrs.list[ix] = flist[ix];
    }
    fctrs.count = newSize;
  }
}
