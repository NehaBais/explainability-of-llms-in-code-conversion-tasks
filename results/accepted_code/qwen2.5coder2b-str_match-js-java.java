public class StringMatchingExample {
  public static void main(String[] args) {
    // Define variables for strings A and B
    String stringA = "tacoloco";
    String stringB = "co";

    // Determine if the first string starts with second string
    boolean q1 = stringA.startsWith(stringB);

    // Determine if the first string contains the second string at any location
    int q2 = stringA.indexOf(stringB);

    // Multiple matches using regular expression for part 2
    Pattern pattern = Pattern.compile(stringB);
    Matcher matcher = pattern.matcher(stringA);
    List<Integer> q2matches = new ArrayList<>();

    while (matcher.find()) {
      q2matches.add(matcher.start());
    }

    // Determine if the first string ends with second string
    boolean q3 = stringA.endsWith(stringB);

    // Print out the results for each part
    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    if (~q2) {
      System.out.println(
          "2: Is '" + stringB + "' contained in '" + stringA + "'? Yes, at index " + q2 + ".");
    } else {
      System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? No.");
    }
    if (q2matches.size() > 1) {
      System.out.println(
          "   In fact, it happens "
              + q2matches.size()
              + " times within '"
              + stringA
              + "', at index"
              + (q2matches.size() > 1 ? "es" : "")
              + " "
              + q2matches.toString().replace("[", "").replace("]", ""));
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
