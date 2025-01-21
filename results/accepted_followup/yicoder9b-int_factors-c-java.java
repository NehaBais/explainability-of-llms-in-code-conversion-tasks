import java.util.ArrayList;
import java.util.List;

class Factors {
  public List<Integer> list = new ArrayList<>();
}

public class Main {

  static void factor(int num, Factors fctrs) {
    fctrs.list.clear();
    for (int dvsr = 1; dvsr * dvsr < num; ++dvsr) {
      if (num % dvsr == 0) {
        fctrs.list.add(dvsr);
        fctrs.list.add(num / dvsr);
      }
    }
    int dvsr = (int) Math.sqrt(num); // new variable declaration here
    if (dvsr * dvsr == num) {
      fctrs.list.add(dvsr);
    }
  }

  public static void main(String[] args) {
    int[] nums2factor = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();
    for (int i = 0; i < nums2factor.length; ++i) {
      factor(nums2factor[i], ftors);
      System.out.println("factors of " + nums2factor[i] + " are: ");
      String sep = "";
      for (int j = 0; j < ftors.list.size(); ++j) {
        System.out.print(sep + ftors.list.get(j));
        sep = ", ";
      }
      System.out.println();
    }
  }
}
