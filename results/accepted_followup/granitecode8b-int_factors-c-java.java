import java.util.ArrayList;
import java.util.List;

public class Factor {
  public static void main(String[] args) {
    int[] nums2factor = {2059, 223092870, 3135, 45};
    for (int i = 0; i < nums2factor.length; i++) {
      List factors = getFactors(nums2factor[i]);
      System.out.println("Factors of " + nums2factor[i] + ": " + factors);
    }
  }

  public static List getFactors(int num) {
    int dvsr;
    List factors = new ArrayList<>();
    factors.add(1); // Add 1 as a factor
    for (dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0) {
        continue;
      }
      factors.add(dvsr);
      factors.add(num / dvsr);
    }
    if (dvsr * dvsr == num) {
      factors.add(dvsr);
    }
    return factors;
  }
}
