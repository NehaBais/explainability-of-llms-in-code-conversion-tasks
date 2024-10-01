public class Main {
  public static void main(String[] args) {
    String stringA = "tacoloco";
    String stringB = "co";

    boolean q1, q2, q3;
    int m;
    ArrayList<Integer> q2matches = new ArrayList<>();

    // stringA starts with stringB
    q1 = stringA.startsWith(stringB);

    // stringA contains stringB
    q2 = stringA.indexOf(stringB) != -1;

    // multiple matches
    Pattern pattern = Pattern.compile(stringB);
    Matcher matcher = pattern.matcher(stringA);
    while (matcher.find()) {
      q2matches.add(matcher.start());
    }

    // stringA ends with stringB
    q3 = stringA.endsWith(stringB);

    System.out.println(
        "1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
    System.out.println(
        "2: Is '"
            + stringB
            + "' contained in '"
            + stringA
            + "'? "
            + (q2 ? "Yes, at index " + q2matches.get(0) : "No."));
    if (q2 && q2matches.size() > 1) {
      System.out.println(
          "Additionally, it happens "
              + q2matches.size()
              + " times within '"
              + stringA
              + "', At index"
              + (q2matches.size() > 1 ? "es" : "")
              + " "
              + q2matches.toString().replaceAll("\\[|\\]", "").replaceAll(", ", ", ")
              + ".");
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
