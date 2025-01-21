import java.util.*;

public class Main {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";

    // 1. Determine if first string starts with second string
    boolean q1 = stringA.substring(0, stringB.length()).equals(stringB);

    // 2. Determine if first string contains second string
    int q2 = stringA.indexOf(stringB);
    List<Integer> q2matches = new ArrayList<>();

    // 3. Multiple matches
    while (true) {
      int index = stringA.indexOf(stringB, q2 + 1);
      if (index == -1) break;
      else q2matches.add(index);
    }

    // 4. Determine if first string ends with second string
    boolean q3 = stringA.substring(stringA.length() - stringB.length()).equals(stringB);

    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println(
        "2: Is '"
            + stringB
            + "' contained in '"
            + stringA
            + "'? "
            + (q2 >= 0 ? "Yes, at index " + q2 + "." : "No."));

    if (q2 >= 0 && !q2matches.isEmpty()) {
      System.out.println(
          "   In fact, it happens "
              + q2matches.size()
              + " times within '"
              + stringA
              + "', at indexes "
              + String.join(", ", q2matches)
              + ".");
    }

    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
