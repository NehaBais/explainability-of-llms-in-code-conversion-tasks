public class Main {
  public static void main(String[] args) {

    // Define the strings
    String stringA = "tacoloco";
    String stringB = "co";

    // Determine if stringA starts with stringB
    boolean q1 = stringA.startsWith(stringB);

    // Determine if stringA contains stringB
    int q2 = stringA.indexOf(stringB);

    // Multiple matches
    String[] q2matches = new String[0]; // Initialize as empty array for now

    if (q2 != -1) {
      // We have a match, so get the indices of all occurrences and store in an array
      String[] tempMatches = stringA.split(stringB);
      int numberOfOccurrences = tempMatches.length;
      q2matches = new String[numberOfOccurrences];
      for (int i = 0; i < numberOfOccurrences; i++) {
        q2matches[i] = Integer.toString(tempMatches[i].indexOf(stringB));
      }
    }

    // Determine if stringA ends with stringB
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
    if (q2 != -1 && q2matches.length > 1) {
      System.out.println(
          "   In fact, it happens "
              + q2matches.length
              + " times within '"
              + stringA
              + "', at index"
              + (q2matches.length > 1 ? "es" : "")
              + " "
              + String.join(", ", q2matches)
              + ".");
    }
    System.out.println(
        "3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
  }
}
