import java.util.*;

public class StringMatching {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";

    // stringA starts with stringB
    boolean q1 = stringA.substring(0, stringB.length()).equals(stringB);

    // stringA contains stringB
    int q2 = stringA.indexOf(stringB);

    // multiple matches
    List<Integer> q2matches = new ArrayList<>();
    Pattern pattern = Pattern.compile(stringB, Pattern.MULTILINE | Pattern.CASE_INSENSITIVE);
    Matcher matcher = pattern.matcher(stringA);
    while (matcher.find()) {
      int index = matcher.start();
      q2matches.add(index);
    }

    // stringA ends with stringB
    boolean q3 = stringA.substring(stringA.length() - stringB.length()).equals(stringB);

    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println(
        "2: Is '"
            + stringB
            + "' contained in '"
            + stringA
            + "'? "
            + (q2 != -1 ? "Yes, at index " + q2 + "." : "No."));
    if (q2matches.size() > 0) {
      System.out.println(
          "   In fact, it happens "
              + q2matches.size()
              + " times within '"
              + stringA
              + "', at index"
              + (q2matches.size() > 1 ? "es" : "")
              + " "
              + String.join(", ", q2matches)
              + ".");
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
