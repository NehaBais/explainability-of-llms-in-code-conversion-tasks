import java.util.ArrayList;
import java.util.List;

public class Main {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";

    boolean q1 = stringA.startsWith(stringB);
    int q2 = stringA.indexOf(stringB);
    List<Integer> q2matches = new ArrayList<>();

    while (q2 != -1) {
      q2matches.add(q2);
      q2 = stringA.indexOf(stringB, q2 + 1);
    }

    boolean q3 = stringA.endsWith(stringB);

    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println(
        "2: Is '"
            + stringB
            + "' contained in '"
            + stringA
            + "'? "
            + (q2 != -1 ? "Yes, at index " + q2 + "." : "No."));
    if (q2matches.size() > 1) {
      System.out.print(
          "   In fact, it happens "
              + q2matches.size()
              + " times within '"
              + stringA
              + "', at index"
              + (q2matches.size() > 1 ? "es" : "")
              + " ");
      for (int i = 0; i < q2matches.size(); i++) {
        if (i != 0) {
          System.out.print(", ");
        }
        System.out.print(q2matches.get(i));
      }
      System.out.println(".");
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
