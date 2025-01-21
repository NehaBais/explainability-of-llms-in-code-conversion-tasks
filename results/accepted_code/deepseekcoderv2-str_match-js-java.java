public class StringMatchingDemo {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";
    boolean q1, q2, q3;
    int q2Index = -1;
    java.util.ArrayList<Integer> q2matches = new java.util.ArrayList<>();

    // stringA starts with stringB
    if (stringA.substring(0, stringB.length()).equals(stringB)) {
      q1 = true;
    } else {
      q1 = false;
    }

    // stringA contains stringB
    q2Index = stringA.indexOf(stringB);
    if (q2Index != -1) {
      q2 = true;
    } else {
      q2 = false;
    }

    // multiple matches
    java.util.regex.Pattern pattern =
        java.util.regex.Pattern.compile(stringB, java.util.regex.Pattern.CASE_INSENSITIVE);
    java.util.regex.Matcher matcher = pattern.matcher(stringA);
    while (matcher.find()) {
      q2matches.add(matcher.start());
    }

    // stringA ends with stringB
    if (stringA.substring(stringA.length() - stringB.length()).equals(stringB)) {
      q3 = true;
    } else {
      q3 = false;
    }

    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    if (q2) {
      System.out.println(
          "2: Is '" + stringB + "' contained in '" + stringA + "'? Yes, at index " + q2Index + ".");
      if (!q2matches.isEmpty() && q2matches.size() > 1) {
        System.out.print(
            "   In fact, it happens "
                + q2matches.size()
                + " times within '"
                + stringA
                + "', at index"
                + (q2matches.size() > 1 ? "es" : "")
                + " "
                + String.join(
                    ", ",
                    java.util.stream.Collectors.toList(
                        java.util.stream.StreamSupport.spliteratorUnknownSize(
                            q2matches.iterator(), java.util.Spliterator.ORDERED),
                        ","))
                + ".");
      }
    } else {
      System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? No.");
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
