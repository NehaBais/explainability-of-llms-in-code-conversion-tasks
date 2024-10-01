import java.util.regex.*;

public class StringMatching {
  public static void main(String[] args) {
    String first = "abracadabra";
    String second = "abr";

    // Determine if the first string starts with second string
    System.out.println(
        "1. "
            + first
            + " starts with "
            + second
            + ": "
            + Pattern.matches("^" + Pattern.quote(second), first));

    // Determine if the first string contains the second string at any location
    System.out.print("2. " + first + " contains " + second + ": ");
    Matcher matcher = Pattern.compile(Pattern.quote(second)).matcher(first);
    int index = 0;
    while (matcher.find()) {
      System.out.print("true" + (index == 0 ? ", at location " + matcher.start() : ""));
      index++;
    }
    if (index == 0) {
      System.out.println("false");
    } else {
      System.out.println();
    }

    // Determine if the first string ends with the second string
    System.out.println(
        "3. "
            + first
            + " ends with "
            + second
            + ": "
            + Pattern.matches(Pattern.quote(second) + "$", first));
  }
}
