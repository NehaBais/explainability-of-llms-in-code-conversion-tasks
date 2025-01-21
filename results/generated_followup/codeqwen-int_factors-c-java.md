The error occurs because the variable `dvsr` is out of scope within the else if statement.

Here's the corrected code:

```java
import java.util.*;

class Factors {
  int[] list;
  short count;

  public void addFactor(int factor) {
    if (list == null || list.length == count) {
      list = Arrays.copyOf(list, 2 * Math.max(count + 1, 300));
    }
    list[count++] = factor;
  }
}

public class Main {
  public static void main(String[] args) {
    int[] nums2factor = {2059, 223092870, 3135, 45};
    Factors ftors = new Factors();
    char sep;
    for (int num : nums2factor) {
      factors(num, ftors);
      System.out.print("factors of " + num + " are:\n  ");
      sep = ' ';
      for (int factor : ftors.list) {
        System.out.print(sep + factor);
        sep = ',';
      }
      System.out.println("\n");
    }
  }

  static void factors(int num, Factors ftors) {
    int[] flist = new int[301];
    int flix = 0;
    ftors.count = 0;
    for (int dvsr = 1; dvsr * dvsr < num; dvsr++) {
      if (num % dvsr != 0) continue;
      flist[flix++] = dvsr;
      ftors.addFactor(dvsr);
      int quotient = num / dvsr;
      if (quotient != dvsr) {
        flist[flix++] = quotient;
        ftors.addFactor(quotient);
      }
    }
    if (ftors.count < flix) {
      ftors.list = Arrays.copyOf(flist, flix + 1);
      ftors.count = flix;
    } else if (num % dvsr == 0 && dvsr * dvsr != num) { // added `&&` here
      ftors.addFactor(dvsr);
    }
  }
}
```
