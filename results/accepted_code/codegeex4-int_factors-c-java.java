import java.util.ArrayList;
import java.util.List;

class Factors {
  List<Integer> list;
  int count;
}

public class Main {
  public static void main(String[] args) {
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();
    char sep;
    int i, j;

    for (i = 0; i < 4; i++) {
      factor(nums2factor[i], ftors);
      System.out.println("\nFactors of " + nums2factor[i] + " are:");
      sep = ' ';
      for (j = 0; j < ftors.count; j++) {
        System.out.print(sep + " " + ftors.list.get(j));
        sep = ',';
      }
      System.out.println();
    }
  }

  public static void xferFactors(Factors fctrs, List<Integer> flist, int flix) {
    if (flix > 0) {
      fctrs.list.addAll(flist);
    }
    fctrs.count = fctrs.list.size();
  }

  public static Factors factor(int num, Factors fctrs) {
    List<Integer> flist = new ArrayList<>();
    int dvsr;
    fctrs.count = 0;

    if (fctrs.list == null) {
      fctrs.list = new ArrayList<>();
    } else {
      fctrs.list.clear();
    }

    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0) continue;

      flist.add(dvsr);
      flist.add(num / dvsr);
    }

    if (dvsr * dvsr == num) flist.add(dvsr);

    xferFactors(fctrs, flist, flist.size());

    return fctrs;
  }
}
