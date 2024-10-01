import static java.lang.System.out;

import java.util.*;

public class Comparison {
  public static void main(String[] args) {
    String a = new String("1234");
    String b = "123";
    out.println(a + " and " + b);
    out.println((a == b) ? "" : "not ");
    out.println(((int) a.charAt(0)) >= ((int) b.charAt(0)));
  }
}
