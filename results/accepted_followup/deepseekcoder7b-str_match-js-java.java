public class Main {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";

    // stringA starts with stringB
    boolean q1 = stringA.startsWith(stringB);

    // stringA contains stringB and index of match
    int q2 = stringA.indexOf(stringB);

    // multiple matches
    java.util.regex.Matcher matcher = java.util.regex.Pattern.compile(stringB).matcher(stringA);
    ArrayList<Integer> q2matches = new ArrayList<>();
    while (matcher.find()) {
      q2matches.add(matcher.start()); // index of match
    }

    // stringA ends with stringB
    boolean q3 = stringA.endsWith(stringB);

    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println(
        "2: Is '"
            + stringB
            + "' contained in '"
            + stringA
            + "'? "
            + ((q2 >= 0) ? "Yes, at index " + q2 + "." : "No."));
    if (q2matches.size() > 1) {
      System.out.print(
          "   In fact, it happens "
              + q2matches.size()
              + " times within '"
              + stringA
              + "', at indices ");
      for (int i = 0; i < q2matches.size(); i++) {
        System.out.print(q2matches.get(i));
        if (i != q2matches.size() - 1) {
          System.out.print(", ");
        }
      }
      System.out.println(".");
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
