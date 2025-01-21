import java.util.ArrayList;
import java.util.List;

class Factors {
  List<Integer> list = new ArrayList<>();
}

public class Main {

  public static void xferFactors(Factors fctrs, List<Integer> flist) {
    for (int num : flist) {
      fctrs.list.add(num);
    }
  }

  public static Factors factor(int num, Factors fctrs) {
    int dvsr;
    fctrs.list.clear();
    List<Integer> flist = new ArrayList<>();

    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0) continue;

      flist.clear();
      flist.add(dvsr);
      flist.add(num / dvsr);

      xferFactors(fctrs, flist);
    }

    if (dvsr * dvsr == num) fctrs.list.add(dvsr);

    return fctrs;
  }

  public static void main(String[] args) {
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();

    for (int i = 0; i < nums2factor.length; i++) {
      factor(nums2factor[i], ftors);
      System.out.println("factors of " + nums2factor[i] + " are: ");
      for (Integer num : ftors.list) {
        System.out.print(num + ", ");
      }
      System.out.println();
    }
  }
}
